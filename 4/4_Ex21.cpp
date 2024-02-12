// Programming Principles and Practice Using C++, Chapter 4, Excercise 21
// Store name/value pairs. Once data entry complete, display the corresponding names for any integer entered.

#include "std_lib_facilities.h"

int main()
{

    cout << "Please enter a series of unique names / integer values, eg Joe 17\n"
    << "Enter 'NoName 0' to terminate input.\n";

    vector<string> names;
    vector<int> values;

    // Read string and int pairs and push to respective vectors until NoName 0 is entered.
    while(1) {
        string temp_string;
        int temp_int;

        cin >> temp_string >> temp_int;
        if (temp_string =="NoName" && temp_int == 0) break;

        // Check whether name has already been entered. If so, terminate with error message.
        for (string a: names) if (a == temp_string) {
            cout << "Error: duplicate name. Exiting\n";
            return -1;
        }

        names.push_back(temp_string);
        values.push_back(temp_int);
    }

    // Take an integer and display all names with that value
    while (1) {
        cout << "Enter an integer to view all names with that value. Enter -9999 to quit\n";
        int search_int;
        cin >> search_int;
        if (search_int == -9999) return 0;
    vector<string> search_results {};

        for (int i=0; i < values.size(); ++i) {
            if (values[i] == search_int) {
                search_results.push_back(names[i]);
            }
        }

    if (search_results.size() == 0) cout << "Score not found.\n";
    else for (string a: search_results) cout << a << '\n';
    }
}
