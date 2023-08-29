// Read first and second name from Programming: Principles and Practice 2nd edition, pg 65

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first and last names:\n";
    string first, second;
    cin >> first >> second;
    cout << "Hello, " << first << ' ' << second << '\n';
    return 0;
}
