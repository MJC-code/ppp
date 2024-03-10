// Programming: Principles and Practice Using C++ (2nd ed) Chapter 6, Exercise 8
// "Bulls and Cows" guessing game.
// Guess 4 unique letters - 'bull' = right letter, right position; 'cow' = right letter, wrong position

#include <std_lib_facilities.h>

int main()
try
{
    vector<char> answer{'a', 'b', 'c', 'd'};

    cout << "Try to guess the 4 letter combination. Letters have a value a - z and no two are the same.\n";
    cout << "You get a bull for each correct letter in the correct place, and a cow for each correct letter in the wrong place\n";
    cout << "Please enter 4 lower case letters from a to z, separated by spaces: ";
    char a, b, c, d;

    while (cin >> a >> b >> c >> d)
    {
        if (a < 'a' || a > 'z' || b < 'a' || b > 'z' || c < 'a' || c > 'z' || d < 'a' || d > 'z')
        {
            cout << "Please enter 4 lower case letters from a to z, separated by spaces: ";
            continue;
        }
        if (a == b || a == c || a == d || b == c || b == d || c == d)
        {
            cout << "You need to enter 4 UNIQUE letters a - z, separated by spaces.\n";
            continue;
        }
        vector<char> guess {a, b, c, d};
        cout << "You entered ";
        for (char i: guess) cout << i << ' ';
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
        cout << "Please guess again by entering 4 lower case letters separated by spaces ";
    }
    return 0;
}

catch (exception &e)
{
    cout << "Error: " << e.what() << '\n';
}
