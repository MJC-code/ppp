// Programming Principles and Practice Using C++, Chapter 6, Excercise 4
// Store name/value pairs then display them one pair per line.

#include "std_lib_facilities.h"

class Name_value
{
public:
    string name;
    int value;
    Name_value(string name, int value) : name(name), value(value) {}
};

int main()
try
{
    vector<Name_value> people;
    cout << "Please enter a series of unique names / integer values, eg Joe 17\n"
         << "Enter 'NoName 0' to terminate input.\n";

    // Read string and int pairs and push to respective vectors until NoName 0 is entered.
    while (1)
    {
        string temp_string;
        int temp_int;

        cin >> temp_string >> temp_int;
        if (temp_string == "NoName" && temp_int == 0)
            break;

        // Check whether name has already been entered. If so, terminate with error message.
        for (int i = 0; i < people.size(); ++i)
            if (people[i].name == temp_string)
            {
                cout << "Error: duplicate name. Exiting\n";
                return -1;
            }

        people.push_back(Name_value(temp_string, temp_int));
    }

    // Print name / value pairs, one per line
    for (int i = 0; i < people.size(); ++i)
    {
        cout << people[i].name << '\t' << people[i].value << '\n';
    }

    return 0;
}
catch (exception &e)
{
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    return 2;
}