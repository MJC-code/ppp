// From Programming: Principles and Practice 2nd edition, pg 85, Exercise 11
// Prompts for the quantity of each US coin held, then outputs totals

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter the number of pennies you have: ";
    int pennies;
    cin >> pennies;

    cout << "Please enter the number of nickels you have: ";
    int nickels;
    cin >> nickels;

    cout << "Please enter the number of dimes you have: ";
    int dimes;
    cin >> dimes;

    cout << "Please enter the number of quarters you have: ";
    int quarters;
    cin >> quarters;

    cout << "Please enter the number of half dollars you have: ";
    int half_dollars;
    cin >> half_dollars;

    cout << "Please enter the number of dollars you have: ";
    int dollars;
    cin >> dollars;


    if (pennies == 1) cout << "You have 1 penny.\n";
    else cout << "You have " << pennies << " pennies.\n";

    if (nickels == 1) cout << "You have 1 nickel.\n";
    else cout << "You have " << nickels << " nickels.\n";

    if (dimes == 1) cout << "You have 1 dime.\n";
    else cout << "You have " << dimes << " dimes.\n";

    if (quarters == 1) cout << "You have 1 quarter.\n";
    else cout << "You have " << quarters << " quarters.\n";

    if (half_dollars == 1) cout << "You have 1 half dollar.\n";
    else cout << "You have " << half_dollars << " half dollars.\n";

    if (dollars == 1) cout << "You have 1 dollar.\n";
    else cout << "You have " << dollars << " dollars.\n";

    int cents = dollars*100 + half_dollars*50 + quarters*25 + dimes*10 + nickels*5 + pennies;

    cout << "The value of all of your coins is " << cents << " cents.\n";

    float dollar_value = cents / 100.0;
    cout << "The dollar value of all your coins is $" << dollar_value << ".\n";

    return 0;
}
