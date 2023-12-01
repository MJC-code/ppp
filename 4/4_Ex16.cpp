// Programming Principles and Practice Using C++, Chapter 4, Excercise 16
// Find mode of a series of integers

#include "std_lib_facilities.h"


int main()
{
    vector<int> numbers;
    cout << "This program will find the mode of a series of integers. Please enter numbers, followed by Ctrl-D: ";

    for (int temp; cin >> temp;) {
        numbers.push_back(temp);
    }

    sort(numbers);

    int mode = numbers[0];
    int longest_sequence = 1;
    int counter = 0;


    for (int i = 0; i < numbers.size(); ++i)
    {

        if (i == 0 || numbers[i] == numbers[i-1])
        {
           ++counter;
        }


        if (counter > longest_sequence)
            {
                longest_sequence = counter;
                mode = numbers[i-1];
                counter = 1;
            }
    }

    cout << "The mode of the numbers you entered is " << mode << ".\n";
}



