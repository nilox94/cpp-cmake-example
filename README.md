# Requirements
* [gcc](gcc.gnu.org) >= 5
* [cmake](cmake.org) >= 2.8.12
* [conan](https://conan.io/) >= 1.25.0

# Install libraries
To install for the first time the libraries declared in `conanfile.txt` run the following
```
mkdir build
cd build
conan install .. --remote=conan-center
```

## Add new libraries
In case you need to install new libraries start by finding the desired version
```
conan search nlohmann_json --remote=conan-center
```
Which can give you an output similar to this
```
Existing package recipes:

nlohmann_json/3.7.0
nlohmann_json/3.7.3
```
Then pick one and add it to the `conanfile.txt` in the `requires` section
```
[requires]
nlohmann_json/3.7.0
```
Then `conan install` must be runned again`
```
cd build
conan install ..
```
And the cmake files should not be updated since we are including all the libraries installed by conan when linking the target
```
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS} ...)
```

# Generate build system
Generate (or re-generate) the project build system
```
cd build
cmake ..
```

# Compile project
```
cmake --build build
```
