// Programming Principles and Practice Using C++, Chapter 4, Drill 6
// Prompt for a series of numbers, track largest and smallest values

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a series of numbers, each followed by the enter key. Type '|' to exit\n";
    float a;
    cin >> a;
    float largest = a;
    float smallest = a;

    while(cin >> a)
    {
        if (a > largest) {
            cout << "That was the largest so far.\n";
            largest = a;
        }
        if (a < smallest) {
            cout << "That was the smallest so far.\n";
            smallest = a;
        }
    }
}
