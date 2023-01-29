#include <gold/gold/gold_exit.h>

namespace gold {

void
gold_exit(Exit_status status)
{
//  if (parameters != NULL
//      && parameters->options_valid()
//      && parameters->options().has_plugins())
//    parameters->options().plugins()->cleanup();
//  if (status != GOLD_OK && parameters != NULL && parameters->options_valid())
//    unlink_if_ordinary(parameters->options().output_file_name());
  exit(status);
}

}
