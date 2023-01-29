#pragma once

#include <gold/gold/gold_unreachable.h>

namespace gold {

// Assertion check.

#define gold_assert(expr) ((void)(!(expr) ? gold_unreachable(), 0 : 0))

}
