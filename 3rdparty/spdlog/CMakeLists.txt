add_subdirectory(spdlog-1.11.0)

target_include_directories(spdlog SYSTEM PUBLIC ${CMAKE_CURRENT_LIST_DIR}/spdlog-1.11.0/include)
