// Programming Principles and Practice Using C++, Chapter 4, Excercise 19
// Store name/value pairs then display them one pair per line.

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

    // Print name / value pairs, one per line
    for (int i=0; i<names.size(); ++i) {
        cout << names[i] << '\t' << values[i] << '\n';
    }

    return 0;
}
