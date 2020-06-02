# Requirements
* [git](git-scm.com) >= 2.2
* [gcc](gcc.gnu.org) >= 5
* [cmake](cmake.org) >= 2.8.12

# Clone repository
```
git clone --recursive https://github.com/nilox94/cpp-cmake-example.git
``` 

# Install libraries
To install for the first time the package manager (vcpkg) must be bootstrapped
```
cd vcpkg
```
```
PS> .\bootstrap-vcpkg.bat
Linux:~/$ ./bootstrap-vcpkg.sh
```

Then the projects libraries can be installed
```
PS> .\vcpkg install nlohmann-json Catch2 armadillo h5cpp
Linux:~/$ ./vcpkg install nlohmann-json Catch2 armadillo h5cpp
```

# Convert MAT files to HDF5
```
cd src/arma/
python mat2h5.py 16BCN_1024samples_2048sync_4_9221Q_44100fs.mat
```

# Generate HDF5 loaders
For loading new HDF5 data you can write your loader using the tool `h52cpp.py`
```
python h52cpp.py path/to/some.h5 > path/to/some/loader.cc
```

# Generate build system
Generate (or re-generate) the project build system
```
mkdir build
cd build
cmake ..
```

# Build project
```
cmake --build build
```
