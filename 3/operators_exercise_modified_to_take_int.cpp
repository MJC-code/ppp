// Simple program to exercise operators from Programming: Principles and Practice 2nd edition, pg 67.

// Modified to read an integer - division is now integer division

// sqrt function implicitly casts n to a float, so the explicit case mentioned in
// the textbook is not strictly required.

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter an integer:\n";
    int n;
    cin >> n;
    float f = n;
    cout << "n == " << n
         << "\nn+1 == " << n + 1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*n
         << "\nhalf of n (rounded down) == " << n/2
         << "\nsquare root of n == " << sqrt(f)
         << '\n';
    return 0;
}
