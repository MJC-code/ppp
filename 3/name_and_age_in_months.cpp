// Read name and age and print in months from Programming: Principles and Practice 2nd edition, pg 64

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first and age:\n";
    string first_name = "???";
    double age = -1.0f;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age * 12 << " months)\n";
    return 0;
}
