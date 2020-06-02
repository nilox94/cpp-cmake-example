#!/usr/bin/env python3
from sys import stdin, argv
from h5py import File, Dataset

def get_datasets(parent):
  for child in parent.values():
    if type(child) == Dataset:
      yield child
    else:
      yield from get_datasets(child)

scalar_types = {
  'int64': 'arma::s64',
  'float64': 'std::vector<double>',
  'complex128': 'arma::cx_double',
  'object': 'std::vector<std::string>',
}
vec_types = {
  'int64': 'arma::s64_vec',
  'float64': 'arma::dvec',
  'complex128': 'arma::cx_dvec',
  'object': 'std::vector<std::string>',
}
matrix_types = {
  'int64': 'arma::s64_mat',
  'float64': 'arma::dmat',
  'complex128': 'arma::cx_dmat',
  'object': 'std::vector<std::string>',
}

def get_type(ds: Dataset):
  '''
  Translate numpy hdf5 type to an apropriate armadillo type
  '''
  dims = len(ds.shape)
  if dims == 2:
    # matrix
    tp = matrix_types[ds.dtype.name]
  elif dims == 1 and ds.shape[0] > 1:
    # vector
    tp = vec_types[ds.dtype.name]
  elif dims == 1:
    # scalar
    tp = scalar_types[ds.dtype.name]
  else:
    raise Exception()
  return tp

def get_name(ds: Dataset):
  '''
  Convert dataset path like "/a/b/c/c" into names like "a_b_c"
  '''
  path = ds.name.split('/')
  if not path[0]:
    path.pop(0)
  if len(path) > 1 and path[-1] == path[-2]:
    path.pop(-1)
  return '_'.join(path)


preamble = '''\
#include <armadillo>
#include <string>
#include <vector>

// don't touch this sandwich
#include <h5cpp/core>
  #include "h5_complex_sandwich.hpp"
#include <h5cpp/io>
// end of sandwich
'''

indent = ' ' * 2

h5 = argv[1]
with File(h5, 'r') as f:
  print(preamble)
  print('namespace Data {')
  print(f'{indent}std::string filename = "{h5}";')
  for ds in get_datasets(f):
    tp = get_type(ds)
    nm = get_name(ds)
    print(f'\n{indent}auto {nm} = h5::read<{tp}>(filename,\n{indent*2}"{ds.name}"); // shape {ds.shape}')
  print('}')
