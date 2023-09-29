// From Programming: Principles and Practice 2nd edition, pg 85, Exercise 1


#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a number of miles you wish to convert to kilometres: ";
    double miles = -1;
    cin >> miles;

    cout << miles << " miles is equal to " << miles * 1.609 << " kilometres\n";
    return 0;
}
