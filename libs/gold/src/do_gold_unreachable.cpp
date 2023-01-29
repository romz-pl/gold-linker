#include <gold/gold/do_gold_unreachable.h>

#include <gold/config/system.h>
#include <gold/gold/gold_exit.h>
#include <stdio.h>

namespace gold {

// Handle an unreachable case.

void
do_gold_unreachable(const char* filename, int lineno, const char* function)
{
//  fprintf(stderr, _("%s: internal error in %s, at %s:%d\n"),
//      program_name, function, filename, lineno);

    fprintf(stderr, _("internal error in %s, at %s:%d\n"),
        function, filename, lineno);
  gold_exit(GOLD_ERR);
}

}
