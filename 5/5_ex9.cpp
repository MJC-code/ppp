// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 9
// Read and store a series of integers, then compute the sum of the first N (ask for N first)

#include <std_lib_facilities.h>

int main()
try
{
    cout << "Please enter the number of integers you want to sum: ";
    int number_to_sum;
    cin >> number_to_sum;
    if (number_to_sum < 1)
        error("The number of values to sum must be at least one.\n");

    cout << "Please enter some integers (Press '|' to stop): ";
    vector<int> numbers;

    for (long temp; cin >> temp;)
    {
        numbers.push_back(narrow_cast<int>(temp));
    }

    if (numbers.size() < number_to_sum)
        error("You didn't enter enough integers to sum.\n");

    long sum = 0;
    for (int i = 0; i < number_to_sum; i++)
    {
        sum += numbers[i];
        sum = narrow_cast<int>(sum);
    }

    cout << "The sum of the first " << number_to_sum << " numbers you entered ( ";
    for (int i = 0; i < number_to_sum; i++)
    {
        cout << numbers[i] << ' ';
    }
    cout << ") is " << sum << '\n';
    return 0;
}

catch (exception &e)
{
    cout << "Error: " << e.what() << '\n';
}
