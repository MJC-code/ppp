// Programming Principles and Practice Using C++, Chapter 4, Excercise 17
// Find find 'min', 'max' and 'mode' of a series of strings

#include "std_lib_facilities.h"


int main()
{
    vector<string> strings;
    cout << "This program will find the min, max and mode of a series of strings. Please enter a series of strings, followed by Ctrl-D: ";

    for (string temp; cin >> temp;) {
        strings.push_back(temp);
    }

    // calculate and display the mode
    sort(strings);

    string mode = strings[0];
    int longest_sequence = 1;
    int counter = 0;


    for (int i = 0; i < strings.size(); ++i)
    {

        if (i == 0 || strings[i] == strings[i-1])
        {
            ++counter;
        }


        else if (counter > longest_sequence)
        {
            longest_sequence = counter;
            mode = strings[i-1];
            counter = 1;
        }
    }

    cout << "The mode of the strings you entered is " << mode << ".\n";

    string min = strings[0];
    string max = strings[strings.size()-1];

    cout << "The 'min' string is " << min << endl;
    cout << "The 'max' string is " << max << endl;

    return 0;
}
