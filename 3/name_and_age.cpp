// Read name and age (2nd version) from Programming: Principles and Practice 2nd edition, pg 64

// Note that standard istream behaviour changed in C++11, so that with input "22 Carlos", the output
// will be "Hello, 22 (age 0)", rather than "Hello, 22 (age -1)"
// See https://stackoverflow.com/questions/19522504/istream-behavior-change-in-c-upon-failure


#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first and age:\n";
    string first_name = "???";
    int age = -1;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age << ")\n";
    return 0;
}
