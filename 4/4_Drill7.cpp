// Programming Principles and Practice Using C++, Chapter 4, Drill 7
// Input lengths, using units cm, m, in, ft.
// Track largest and smallest lengths - all lengths converted to cm internally

#include "std_lib_facilities.h"

int main()
{
    bool first_entry = true;
    bool valid_entry = false;
    float smallest = 0;
    float largest = 0;
    float conversion_factor = 0;

    cout << "Please enter a number and unit, followed by the enter key.\nAllowed units are cm m in ft. Type '|' to exit\n";
    float a;
    string unit;

    while(cin >> a >> unit)
    {
        if (unit == "cm")
        {
            conversion_factor = 1;
            valid_entry = true;
        }
        else if (unit == "m")
        {
            conversion_factor = 100;
            valid_entry = true;
        }
        else if (unit == "in")
        {
            conversion_factor = 2.54;
            valid_entry = true;
        }
        else if (unit == "ft")
        {
            conversion_factor = 2.54 * 12;
            valid_entry = true;
        }
        else valid_entry = false;

        if (valid_entry == true)
        {
            float length_in_cm = a * conversion_factor;
            if (length_in_cm > largest || first_entry == true)
            {
                cout << "That was the largest so far.\n";
                largest = length_in_cm;
            }

            if (length_in_cm < smallest || first_entry == true)
            {
                cout << "That was the smallest so far.\n";
                smallest = length_in_cm;
            }
        }

        else cout << "Sorry, that measurement was not recognised.\n";

        cout << "Smallest: " << smallest << "   Largest: " << largest << endl;
        first_entry = false;
    }
}



