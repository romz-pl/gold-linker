set( LIB_NAME gold-gold )

add_library( ${LIB_NAME} STATIC
    Exit_status.cpp
    do_gold_unreachable.cpp
    gold_exit.cpp
    gold_assert.cpp
    gold_unreachable.cpp
    token.cpp
)


target_include_directories( ${LIB_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

target_link_libraries( ${LIB_NAME}
    PUBLIC
    gold-config
)

