if( CMAKE_CXX_COMPILER_ID STREQUAL "GNU" )

    if((CMAKE_CXX_COMPILER_VERSION VERSION_LESS 13) AND (CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 12))
        include(${CMAKE_CURRENT_LIST_DIR}/warnings-gcc-12.cmake)
    else()
        include(${CMAKE_CURRENT_LIST_DIR}/warnings-gcc-default.cmake)
    endif()

elseif( CMAKE_CXX_COMPILER_ID STREQUAL "Clang" )

    if((CMAKE_CXX_COMPILER_VERSION VERSION_LESS 15) AND (CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 14))
        include(${CMAKE_CURRENT_LIST_DIR}/warnings-clang-14.cmake)
    else()
        include(${CMAKE_CURRENT_LIST_DIR}/warnings-clang-default.cmake)
    endif()

endif()

string(REPLACE ";" " " LLC_WARNINGS_STR "${LLC_WARNINGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${LLC_WARNINGS_STR}")
