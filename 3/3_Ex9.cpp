// From Programming: Principles and Practice 2nd edition, pg 85, Exercise 9
// Outputs the digits 0 to 4 as digits when the corresponding string is entered.

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a lowercase word for a number between 'zero' and 'four', followed by the enter key: ";
    string word;
    cin >> word;

    if (word == "zero" || word == "Zero") cout << "0\n";
    else if (word == "one" || word == "One") cout << "1\n";
    else if (word == "two" || word == "Two") cout << "2\n";
    else if (word == "three" || word == "Three") cout << "3\n";
    else if (word == "four" || word == "Four") cout << "4\n";
    else cout << "Not a number I know, sorry\n";
    return 0;
}
