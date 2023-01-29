#pragma once

#include <gold/config/ansidecl.h>
#include <gold/gold/Exit_status.h>

namespace gold {

// This function is called to exit the program.  Status is true to
// exit success (0) and false to exit failure (1).
extern void
gold_exit(Exit_status status) ATTRIBUTE_NORETURN;

}
