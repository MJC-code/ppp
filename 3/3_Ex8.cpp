// From Programming: Principles and Practice 2nd edition, pg 85, Exercise 8
// Tests whether an integer input is odd or even
#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter an integer, followed by the enter key: ";
    int value;
    cin >> value;

    if (value % 2 == 0) cout << "The number " << value << " is even.\n";
    else cout << "The number " << value << " is odd.\n";
    return 0;
}
