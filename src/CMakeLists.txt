add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(config)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS} config)
