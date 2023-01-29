#pragma once

#include <gold/gold/do_gold_unreachable.h>

// This macro and function are used in cases which can not arise if
// the code is written correctly.

#define gold_unreachable() \
  (gold::do_gold_unreachable(__FILE__, __LINE__, __FUNCTION__))
