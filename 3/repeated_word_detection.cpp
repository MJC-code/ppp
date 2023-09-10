// From Programming: Principles and Practice 2nd edition, pg 71.

// Reads input from cin and detects repeated words

#include "std_lib_facilities.h"

int main()
{
    string previous = " ";
    string current;
    while (cin >> current)
    {
        if (previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
    return 0;
}
