add_executable(${PROJECT_NAME} main.cc)

add_subdirectory(config)

add_subdirectory(arma)

target_link_libraries(${PROJECT_NAME} config)

add_subdirectory(tests)
