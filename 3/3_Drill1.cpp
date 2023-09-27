// From Programming: Principles and Practice 2nd edition, pg 83, Drill 1

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name of the person you want to write to (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n";
    return 0;
}
