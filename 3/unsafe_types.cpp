// From Programming: Principles and Practice 2nd edition, pg 78.

// Experiments with unsafe types. g++ with -Wall will warn of uninitialized variable

#include "std_lib_facilities.h"

int main()
{
    double x;
    double y = x;
    double z = 2.0 + x;
    cout << x << ' ' << y << ' ' << z << endl;
    return 0;
}
