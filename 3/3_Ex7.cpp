// From Programming: Principles and Practice 2nd edition, pg 85, Exercise 7
// Prompts for three strings, outputs them in ascending order (using C++ default string ordering).
// And/or operators not yet introduced in text, so this gets untidy.

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter three strings, followed by the enter key: ";
    string val1, val2, val3;
    cin >> val1 >> val2 >> val3;

    if (val1 <= val2) {
        if (val1 <= val3) {
            cout << val1 << ", ";
            if (val2 < val3) cout << val2 << ", " << val3 << ".\n";
            else cout << val3 << ", " << val2 << ".\n";
            return 0;
          }

        else {cout <<  val3 <<  ", ";
            if (val1 < val3) cout << val2 << ", " << val1 << ".\n";
        else cout << val1 << ", " << val2 << ".\n";
            return 0;
          }
      }

    else if (val2 <= val3) {
            cout << val2 << ", ";
            if (val1 < val3) cout << val1 << ", " << val3 << ".\n";
            else cout << val3 << ", " << val1 << ".\n";
            return 0;
      }

    else cout << val3 << ", ";
    if (val1 < val2) cout << val1 << ", " << val2 << ".\n";
    else cout << val2 << ", " << val1 << ".\n";

    return 0;
}
