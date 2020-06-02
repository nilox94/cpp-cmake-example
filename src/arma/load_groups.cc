#define ARMA_USE_HDF5
#define ARMA_DONT_USE_WRAPPER

#include <hdf5.h>
#include <armadillo>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
using namespace arma;

int main() {
  arma::Cube<u16> cube;
  cube.load(arma::hdf5_name("matrices.h5", "arr3d/arr3d"));
  cube.print("arr3d");

  arma::Mat<u8> matrix;
  matrix.load(arma::hdf5_name("matrices.h5", "arr2d/arr2d"));
  matrix.print("arr2d");

  arma::Row<u8> tmp;
  tmp.load(arma::hdf5_name("matrices.h5", "col/col"));
  arma::Col<u8> column = tmp.t();
  column.print("col");

  arma::Row<u8> row;
  row.load(arma::hdf5_name("matrices.h5", "row/row"));
  row.print("row");

  arma::Mat<s64> scalar;
  scalar.load(arma::hdf5_name("matrices.h5", "scalar/scalar"));
  scalar.print("scalar");

	return 0;
}