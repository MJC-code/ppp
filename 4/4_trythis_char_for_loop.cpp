// From Programming: Principles and Practice 2nd edition, pg 113
// Print table of characters with their integer values, now using a for loop

#include "std_lib_facilities.h"

int main()
{
  for (int i=0; i<26; ++i) {
    cout << char('A' + i) << '\t' << int('A' + i) << '\n';

  }

  return 0;
}
