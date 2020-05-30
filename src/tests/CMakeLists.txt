find_package(Catch2 CONFIG REQUIRED)

add_executable(tests main.cc test_factorial.cc test_config.cc)
target_link_libraries(tests PRIVATE config Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(tests)
