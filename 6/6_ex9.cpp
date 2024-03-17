// Programming: Principles and Practice Using C++ (2nd ed) Chapter 6, Exercise 9
// Read digits, compose them into integers eg 123 -> '1 hundred and 2 tens and 3 ones'

#include <std_lib_facilities.h>

int main()
try
{
    vector<string> units {"one", "ten", "hundred", "thousand"};
    vector<int> digits;
    char input;
 
    cout << "Please enter a 1, 2, 3 or 4 digit integer, followed by 'x': ";
    while (cin >> input)
    {
        if (input == 'x') break;
        if (! (input < '0' || input > '9')) digits.push_back(input - '0');
    }

    if (digits.size() < 1 || digits.size() > 4) error("number must have 1, 2, 3 or 4 digits.\n");

    cout << "The number you entered was ";
    for (int i: digits) cout << i;
    cout << ".\n";
    for (int i: digits) cout << i;
    cout << " is ";

    for (int i = 0; i < digits.size(); i++)
    {
        if(digits[i] == 0) continue;  // don't print anything for units whose value is 0
        cout << digits[i];
        cout << " " << units[digits.size() - (i+1)];
        if (digits[i] > 1) cout << "s";
        
        // print 'and' if any subsequent digit is greater than 0
        for (int j = i+1; j < digits.size(); j++)
        {
            if(digits[j] > 0)
            {
                cout << " and ";
                break;
            }
        }
    }
    cout << ".\n";
}

catch (exception &e)
{
    cout << "Error: " << e.what() << '\n';
}
