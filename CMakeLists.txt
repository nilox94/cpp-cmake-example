cmake_minimum_required(VERSION 2.8.12)
project(project)

add_definitions("-std=c++11")

if (EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake)
  include(vcpkg/scripts/buildsystems/vcpkg.cmake)
else()
  message(WARNING "vcpkg not found: using system libraries")
endif()

# add_subdirectory(thirdparty/h5cpp)
add_subdirectory(src)
