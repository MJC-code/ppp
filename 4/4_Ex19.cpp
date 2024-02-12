// Programming Principles and Practice Using C++, Chapter 4, Excercise 19
<<<<<<< HEAD
// Accept input of a set of name-and-value pairs eg Joe 17 and Barbara 22. Terminate entry with NoName 0
// Exit with an error if a name is entered twice, otherwise write out the (name, score) pairs one per line

#include "std_lib_facilities.h"


int main()
{

    cout << "Please enter a set of name-and-value pairs, eg Joe 17 and Barbara 22. Terminate entry with NoName 0\n";

    vector<string> names;
    vector<int> scores;

    string temp_name;
    int temp_score;

// read in data. Exit with error message if duplicate names are entered.
   while (cin >> temp_name >> temp_score)
    {
        if (temp_name == "NoName" && temp_score == 0) break;

        for (string i: names)
        {
            if (i == temp_name)
            {
                cout << "Error. Duplicate name entered. Exiting.\n";
                exit(0);
            }
        }
        names.push_back(temp_name);
        scores.push_back(temp_score);
    }

// Output list of name-value pairs
    for (int i = 0; i < names.size(); ++i)
    {
        cout << names[i] << '\t' << scores[i] << '\n';
    }
=======
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

>>>>>>> 2a2f7bbaa56acff8dbdbc8d8f7e2f218e4e21e1e
    return 0;
}
