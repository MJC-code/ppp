// From Programming: Principles and Practice 2nd edition, pg 111
// Print table of characters with their integer values

#include "std_lib_facilities.h"

int main()
{
    int i = 0;
    while (i < 26) {
      cout << char('a' + i) << '\t' << int('a' + i) << '\n';
      ++i;
    }

    return 0;
}
