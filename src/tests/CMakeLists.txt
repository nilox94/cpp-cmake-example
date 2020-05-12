#add_executable(tests testmain.cpp ${PROJECT_SOURCES})
#target_link_libraries(tests PRIVATE catch)

find_package(Catch2 REQUIRED)
add_executable(tests main.cc test_factorial.cc test_config.cc)
target_link_libraries(tests Catch2::Catch2 config)

include(CTest)
include(Catch)
catch_discover_tests(tests)

