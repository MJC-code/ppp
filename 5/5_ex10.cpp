// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 10
// Read and store a series of doubles, then compute the sum of the first N (ask for N first)
// Also write out the differences between adjacent values

#include <std_lib_facilities.h>

int main()
try
{
    cout << "Please enter the number of doubles you want to sum: ";
    int number_to_sum;
    cin >> number_to_sum;
    if (number_to_sum < 1)
        error("The number of values to sum must be at least one.\n");

    cout << "Please enter some doubles (Press '|' to stop): ";
    vector<double> numbers;

    for (double temp; cin >> temp;)
    {
        numbers.push_back(temp);
    }

    if (numbers.size() < number_to_sum)
        error("You didn't enter enough doubles to sum.\n");

    double sum = 0;
    for (int i = 0; i < number_to_sum; i++)
    {
        sum += numbers[i];
    }

    cout << "The sum of the first " << number_to_sum << " numbers you entered ( ";
    for (int i = 0; i < number_to_sum; i++)
    {
        cout << numbers[i] << ' ';
    }
    cout << ") is " << sum << '\n';

    cout << "The differences between adjacent numbers were:\n";
    for (int i = 0; i < number_to_sum - 1; i++)
    {
        cout << numbers[i + 1] - numbers[i] << " ";
    }
    cout << '\n';
    return 0;
}

catch (exception &e)
{
    cout << "Error: " << e.what() << '\n';
}
