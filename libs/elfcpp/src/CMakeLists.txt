set( LIB_NAME gold-elfcpp )

add_library( ${LIB_NAME} STATIC
    aarch64.cpp
#    arm.cpp
#    dwarf.cpp
    elfcpp.cpp
    elfcpp_file.cpp
#    elfcpp_internal.cpp
    elfcpp_swap.cpp
#    i386.cpp
#    mips.cpp
#    powerpc.cpp
#    s390.cpp
#    sparc.cpp
#    tilegx.cpp
#    x86_64.cpp

)


target_include_directories( ${LIB_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

target_link_libraries( ${LIB_NAME}
    PUBLIC
    gold-config
)

