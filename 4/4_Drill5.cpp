// Programming Principles and Practice Using C++, Chapter 4, Drill 5
// While loop inputting 2 numbers, then printing them in ascending order, now with message if numbers are equal. Print message if numbers differ by less than 0.01

// Note, if the two numbers are exactly 0.01 apart (eg 1 and 1.01) then thanks to
// floating-point imprecision, the conditional comparison can still be triggered.

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter two numbers, followed by enter. Type '|' to exit\n";
    float a, b;
    while(cin >> a >>b)
    {
        if (a == b) {cout << "The numbers are equal\n";}
        else if (a < b) {
            cout <<  "The smaller value is "<<  a << " and the larger value is " <<  b << '\n';
        }
        else {
            cout <<  "The smaller value is "<<  b << " and the larger value is " <<  a << '\n'; }

        if (abs(a - b ) < 1.0/100) cout << "The numbers are almost equal.\n";

    }
}
