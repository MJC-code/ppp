// From Programming: Principles and Practice 2nd edition, pg 105
// Simple currency converter, converts yen, euros and pounds to US dollars, doesn't round to 2 or more decimal places.

#include "std_lib_facilities.h"

int main()
{
    constexpr double yen_usd {0.0067};
    constexpr double eur_usd {1.06};
    constexpr double gbp_usd {1.22};

    cout << "Please enter a sum to convert to USD, followed by y (yen), e (euros) or p(pounds): ";
    double value;
    char currency = ' ';
    cin >> value >> currency;

    if (currency == 'y') cout << value << " yen is equal to USD$" << value * yen_usd << ".\n";
    else if (currency == 'e') cout << value << " euros is equal to USD$" << value * eur_usd << ".\n";
    else if (currency == 'p') cout << value << " pounds is equal to USD$" << value * gbp_usd << ".\n";
    else cout << "Sorry, I don't recognise that currency.\n";

    return 0;
}
