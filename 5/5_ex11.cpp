// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 11
// Print out the first N values of the Fibonacci Sequence

#include <std_lib_facilities.h>

int main()
try
{
    cout << "How many numbers in the Fibonacci Sequence should I print? ";
    int number_to_print{};
    cin >> number_to_print;
    int current = 1;
    int previous = 1;

    if (number_to_print == 1) {
        cout << previous << 'n';
        return 0;
    }

    cout << previous << ' ' << current << ' ';
    

    while (number_to_print - 2 > 0) 
    {
        int temp = previous + current;
        if (temp < current) error ("Overflow occurred");
        previous = current;
        current = temp;
        cout << current << ' ';
        --number_to_print;
    }
    cout << '\n';
    return 0;
}

catch (exception &e)
{
    cout << "Error: " << e.what() << '\n';
}
