set( LIB_NAME gold-config )

add_library( ${LIB_NAME} STATIC
    ansidecl.cpp
    config.cpp
    system.cpp
)


target_include_directories( ${LIB_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

target_link_libraries( ${LIB_NAME}
    PUBLIC
    #spdlog
)

