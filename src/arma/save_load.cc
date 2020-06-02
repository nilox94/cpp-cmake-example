#define ARMA_USE_HDF5
#define ARMA_DONT_USE_WRAPPER

#include <hdf5.h>
#include <armadillo>
#include <string>
#include <iostream>

using namespace std;
using namespace arma;

int main() {

	arma::Mat<double> A = {
		{1., 2.3, 1.1},
		{.1, 2.2, 7.1},
	};
	arma::Col<s8> b = {
		-3,
		11,
		20
	};
	arma::Mat<u8> C = {
		{1, 0},
		{0, 1}
	};
	arma::Mat<int> d = {20};

	A.save(arma::hdf5_name("data1.h5", "A"));
	b.save(arma::hdf5_name("data1.h5", "b", hdf5_opts::append)); // !important (append)
	C.save(arma::hdf5_name("data1.h5", "C", hdf5_opts::append));
	d.save(arma::hdf5_name("data1.h5", "d", hdf5_opts::append));

  mat m;
  for (string &&ds : {"A", "b", "C", "d"}) {
    cout << ds << ":" << endl;
    m.load(arma::hdf5_name("data1.h5", ds));
    m.print();
  }

	return 0;
}
