add_executable(${PROJECT_NAME} main.cc)

add_subdirectory(config)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS} config)
