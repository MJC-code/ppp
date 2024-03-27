// Programming: Principles and Practice Using C++ (2nd ed) Chapter 6, Exercise 10
// Read two integers, calculate either permutations or combinations for those two numbers
#include <std_lib_facilities.h>


int main()
try
{
    cout << "This program will calculate the possible permutations or combinations of two numbers.\n";

    long a, b;
    while (true)
    {
    cout << "Please enter two numbers, the first for how many possible numbers there are, and the second\n"
            "for the number of combinations/permutations (second number must not be larger than the first): ";
        cin >> a >> b;
        if(!std::cin)
        {
            cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (a < 1 || b < 1)
        {
            cout << "Both numbers must be positive.\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (b > a)
        {
            cout << "Second number must not be larger than the first.\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        break;
    }

    char operation = 'x';
    while (toupper(operation) != 'P' && toupper(operation) != 'C')
    {
        cout << "Please enter p to calculate permutations or c to calculate combinations: ";
        cin >> operation;
    }
}

catch (exception &e)
{
    cout << "Error: " << e.what() << '\n';
}
