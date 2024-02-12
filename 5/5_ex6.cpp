// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 6
// Converts a temperature between degrees celsius and farenheit

#include <std_lib_facilities.h>


double ctof(double c)
{
    double f = (c * 9.0 / 5.0) + 32;
    return f;
}

double ftoc(double f)
{
    double c = (f - 32) * (5.0 / 9.0);
    return c;
}

int main()
try {
    cout << "Please enter a value in degrees followed by c for celsius or f for farenheit to convert: ";
    double value;
    char unit;
    cin >> value >> unit;
    switch(unit)
    {
        case 'c':

            cout << value << " degrees celsius equals " << ctof(value) << " degrees farenheit.\n";
            break;
        case 'f':
            cout << value << " degrees farenheit equals " << ftoc(value) << " degrees celsius.\n";
            break;
        default:
            error("Unit not recognised. Must be c or f\n");
    }
    return 0;

}
catch (exception& e) {
    cerr << "Runtime error: " << e.what();
    keep_window_open();
    return 1;
}
