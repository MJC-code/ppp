// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 12
// "Bulls and Cows" guessing game.
// Guess 4 unique integers - 'bull' = right digit, right position; 'cow' = right digit, wrong position

#include <std_lib_facilities.h>

int main()
try
{
    vector<int> answer{1, 2, 3, 4};

    cout << "Try to guess the 4 digit combination. Digits have a value 0-9 and no two are the same.\n";
    cout << "You get a bull for each correct digit in the correct place, and a cow for each correct digit in the wrong place\n";
    cout << "Please enter 4 digits from 0 to 9, separated by spaces: ";
    int a, b, c, d;

    while (cin >> a >> b >> c >> d)
    {
        if (a < 0 || a > 9 || b < 0 || b > 9 || c < 0 || c > 9 || d < 0 || d > 9)
        {
            cout << "Please enter 4 digits from 0 to 9, separated by spaces: ";
            continue;
        }
        if (a == b || a == c || a == d || b == c || b == d || c == d)
        {
            cout << "You need to enter 4 UNIQUE digits 0-9, separated by spaces.\n";
            continue;
        }
        vector<int> guess {a, b, c, d};
        cout << "You entered ";
        for (int i: guess) cout << i << ' ';
        cout << '\n';

        // Test for bulls (correct digit, correct position)
        // Flag bulls by setting that digit of guess to -1, so that they are not also counted as cows
        int bulls = 0;
        int cows = 0;

        for (int i=0; i<guess.size(); i++)
        {
            if (guess[i] == answer[i])
            {
                ++bulls;
                guess[i] = -1; // Counted as a bull, flag with -1 value so not also counted as a cow
            }
        }
        // If 4 bulls found, the guess was correct - print message and exit
        if (bulls == 4)
        {
            cout << "You are correct, the answer is ";
            for (int i=0; i<answer.size(); ++i)
            {
                cout << answer[i];
            }
            cout << '\n';
            return 0;
        }

        // Test for cows (Correct digit, wrong position)
        for (int i=0; i<guess.size(); i++)
        {
            for (int j=0; j<answer.size(); j++)
            {
                if (guess[i] == answer[j]) ++cows;
            }
        }

        cout << "Your guess scored " << bulls << " bulls and " << cows << " cows.\n";
        cout << "Please guess again by entering 4 digits (0-9) separated by spaces ";
    }
    return 0;
}

catch (exception &e)
{
    cout << "Error: " << e.what() << '\n';
}
