find_package(nlohmann_json CONFIG REQUIRED)
add_library(config STATIC config.cc config.hpp)
target_link_libraries(config PRIVATE nlohmann_json nlohmann_json::nlohmann_json)
