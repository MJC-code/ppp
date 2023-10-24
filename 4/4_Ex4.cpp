// Programming Principles and Practice Using C++, Chapter 4, Excercise 4
// Number guessing game

#include "std_lib_facilities.h"

int main()
{
    int min = 1;
    int max = 100;
    int answer;

    cout << "Please enter an integer from " << min << " to " << max << ":\n";
    for (int temp; cin >> temp;)
    {
        if (temp >= 1 && temp <= 100)
        {
            answer = temp;
            break;
        }
        cout << "Please enter an integer from " << min << " to " << max << ":\n";
    }

    int guess = 50;

    while (guess != answer)
    {
        cout << "Is the number you are thinking of less than " << guess << "? Enter y or n.\n";
        char temp;
        cin >> temp;

        if (temp == 'y')
        {
            max = guess;
            guess = (min + guess) / 2;

        }
        if (temp == 'n')
        {
            min = guess;
            guess = (max + 1 + guess) / 2;

        }
    }

    cout << "The number you entered was " << guess << ".\n";

}



