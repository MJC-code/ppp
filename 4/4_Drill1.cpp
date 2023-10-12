// Programming Principles and Practice Using C++, Chapter 4, Drill 1
// While loop inputting 2 numbers, then printing them

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter two integers, followed by enter. Type '|' to exit\n";
    int a, b;
    while(cin >> a >>b)
    {
        cout <<  a << '\t' <<  b << '\n';
    }
}
