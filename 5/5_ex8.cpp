// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 8
// Read and store a series of integers, then compute the sum of the first N (ask for N first)

#include <std_lib_facilities.h>

int main()
try {
    cout << "Please enter the number of integers you want to sum: ";
    int number_to_sum;
    cin >> number_to_sum;
    if (number_to_sum < 1) error("The number of values to sum must be at least one.\n");


    cout << "Please enter some integers (Press '|' to stop): ";
    vector<int> numbers;
    for (int temp; cin >> temp;) {
        numbers.push_back(temp);
    }
    
    if (numbers.size() < number_to_sum) error("You didn't enter enough numbers to sum.\n");
    
    int total = 0;
    for (int i = 0; i < number_to_sum; i++)
    { 
        total += numbers[i];
    }
}
catch(exception& e) {
    cout << "Error: " << e.what() << '\n';
}


