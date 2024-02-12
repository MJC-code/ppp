// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 2
// Converts a temperature in degrees celsius to degrees kelvin

#include <std_lib_facilities.h>

double ctok(double c)
{
    if (c < -273.15) error("Temperature entered was lower than absolute zero\n");
    double k = c + 273.15;
    return k;

}

int main()

try {
    cout << "Please enter a value in degrees celsius to convert to kelvin: ";
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << '\n';
}
catch (exception& e) {
    cerr << "Runtime error: " << e.what();
    keep_window_open();
    return 1;
}
