// Programming Principles and Practice Using C++, Chapter 4, Excercise 19
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
    return 0;
}
