# Requirements
* [gcc](gcc.gnu.org) >= 5
* [cmake](cmake.org) >= 2.8.12
* [conan](https://conan.io/) >= 1.25.0

# Install libraries
To install the libraries declared in `conanfile.txt` run the following.
```
mkdir build
cd build
conan install .. --remote=conan-center
```

In case you need to install new libraries start by finding the desired version.
```
conan search nlohmann_json --remote=conan-center
```

Which can give you an output similar to this.
```
Existing package recipes:

nlohmann_json/3.7.0
nlohmann_json/3.7.3
```

# Generate build system
Generate (or re-generate) the project build system.
```
cd build
cmake ..
```

# Compile project
```
cmake --build build
```
