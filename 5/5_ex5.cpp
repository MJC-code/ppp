// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 5
// Converts a temperature in degrees celsius to degrees kelvin

#include <std_lib_facilities.h>

double ctok(double c)
{
    if (c < -273.15) error("Temperature entered was lower than absolute zero\n");
    double k = c + 273.15;
    return k;
}

double ktoc(double k)
{
    if (k < 0) error("Temperature entered was lower than absolute zero\n");
    double c = k - 273.15;
    return c;
}

int main()
try {
    cout << "Please enter a value in degrees followed by c for celsius or k for kelvin to convert: ";
    double value;
    char unit;
    cin >> value >> unit;
    switch(unit)
    {
        case 'c':

            cout << value << " degrees celsius equals " << ctok(value) << " degrees kelvin.\n";
            break;
        case 'k':
            cout << value << " degrees kelvin equals " << ktoc(value) << " degrees celsius.\n";
            break;
        default:
            error("Unit not recognised. Must be c or k\n");
    }
    return 0;

}
catch (exception& e) {
    cerr << "Runtime error: " << e.what();
    keep_window_open();
    return 1;
}
