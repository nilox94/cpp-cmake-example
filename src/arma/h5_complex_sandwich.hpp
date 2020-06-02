#ifndef H5CPP_REG_COMPLEX
#define H5CPP_REG_COMPLEX

#ifndef H5_PYTHON_FMT
#define H5_PYTHON_FMT 0
// assuming MATLAB encoding for H5FD complex numbers by default
#endif

#define COMPLEX_REAL_FIELD (H5_PYTHON_FMT ? "r" : "real")
#define COMPLEX_IMAG_FIELD (H5_PYTHON_FMT ? "i" : "imag")

#include <h5cpp/core>

namespace h5 {
  template<> hid_t inline register_struct<std::complex<double>>() {
    hid_t type_id = H5Tcreate(H5T_COMPOUND, 2*sizeof(double));
    H5Tinsert(type_id, COMPLEX_REAL_FIELD, 0, H5T_NATIVE_DOUBLE);
    H5Tinsert(type_id, COMPLEX_IMAG_FIELD, sizeof(double), H5T_NATIVE_DOUBLE);
    return type_id;
  };
  template<> hid_t inline register_struct<std::complex<float>>(){
    hid_t type_id = H5Tcreate(H5T_COMPOUND, 2*sizeof(float));
    H5Tinsert(type_id, COMPLEX_REAL_FIELD, 0, H5T_NATIVE_DOUBLE);
    H5Tinsert(type_id, COMPLEX_IMAG_FIELD, sizeof(float), H5T_NATIVE_DOUBLE);
    return type_id;
  };
}
H5CPP_REGISTER_STRUCT(std::complex<double>);
H5CPP_REGISTER_STRUCT(std::complex<float>);

#endif
