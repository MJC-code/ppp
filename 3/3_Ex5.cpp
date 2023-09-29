// From Programming: Principles and Practice 2nd edition, pg 85, Exercise 5
// Prompts for two integers, outputs the results of floating point arithmetic on them.

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter two numbers, followed by the enter key: ";
    float val1, val2;
    cin >> val1 >> val2;
    cout << "The numbers you entered were " << val1 << " and " << val2 << ".\n";

    if (val1 > val2) cout << "Smaller number is " << val2 << "\nLarger number is " << val1;
    if (val2 >= val1) cout << "Smaller number is " << val1 << "\nLarger number is " << val2;
    cout << "\nSum is " << val1 + val2;
    cout << "\nDifference is " << val1 - val2;
    cout << "\nProduct is " << val1 * val2;
    cout << "\nRatio is " << val1 / val2;
    cout << '\n';


}
