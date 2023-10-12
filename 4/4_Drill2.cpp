// Programming Principles and Practice Using C++, Chapter 4, Drill 2
// While loop inputting 2 numbers, then printing them in ascending order

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter two integers, followed by enter. Type '|' to exit\n";
    int a, b;
    while(cin >> a >>b)
    {
        if (a < b) cout <<  "The smaller value is "<<  a << " and the larger value is " <<  b << '\n';
        else cout <<  "The smaller value is "<<  b << " and the larger value is " <<  a << '\n';

    }
}
