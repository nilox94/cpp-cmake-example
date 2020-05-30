# Requirements
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
PS> .\vcpkg install nlohmann-json Catch2 armadillo hdf5
Linux:~/$ ./vcpkg install nlohmann-json Catch2 armadillo hdf5
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
