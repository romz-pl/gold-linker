
# Suppres all compilation warnings for 3rdparty libraries
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")

add_subdirectory(googletest)
add_subdirectory(spdlog)

