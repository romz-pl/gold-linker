#pragma once

#include <cstdlib>

namespace gold {

// Exit status codes.

enum Exit_status
{
  GOLD_OK = EXIT_SUCCESS,
  GOLD_ERR = EXIT_FAILURE,
  GOLD_FALLBACK = EXIT_FAILURE + 1
};

}
