// Programming Principles and Practice Using C++, Chapter 4, Excercise 10
// Simple Rock, Paper, Scissors game
// Randomness not yet introduced in book, so uses a vector of guesses and picks the next each time

#include "std_lib_facilities.h"

vector <char> computer_choices = {'p', 'r', 'p', 's', 's', 'p', 's', 'r', 's', 'p'};

int main()
{
    cout << "To add some randomness, please enter a number from 0 to " << computer_choices.size() -1 << ": ";

    int computer_choice_index = 0;
    while (cin >> computer_choice_index) {
        if (computer_choice_index >=0 && computer_choice_index <= computer_choices.size() -1 ) break;
        cout << "To add some randomness, please enter a number from 0 to " << computer_choices.size() - 1 << ": ";
    }

    cout << "Let's play a game of Rock, Paper, Scissors. Type r, p or s to make your choice or q to quit.\n";

    for (char player_choice; cin >> player_choice;)
    {
        char computer_choice = computer_choices[computer_choice_index];
        switch (player_choice)
        {
            case('r'):
                if (computer_choice == 'r') {
                    cout << "We both chose rock. It's a tie\n";
                    break;
                }
                if (computer_choice == 's') {
                    cout << "Rock beats scissors. You win!\n";
                    break;
                }
                if (computer_choice == 'p') {
                    cout << "Paper beats rock. Computer wins!\n";
                    break;
                }

            case('p'):
                if (computer_choice == 'p') {
                    cout << "We both chose paper. It's a tie\n";
                    break;
                }
                if (computer_choice == 's') {
                    cout << "Scissors beats paper. Computer wins!\n";
                    break;
                }
                if (computer_choice == 'r') {
                    cout << "Paper beats rock. You win!\n";
                    break;
                }

            case('s'):
                if (computer_choice == 's') {
                    cout << "We both chose scissors. It's a tie\n";
                    break;
                }
                if (computer_choice == 'p') {
                    cout << "Scissors beats paper. You win!\n";
                    break;
                }
                if (computer_choice == 'r') {
                    cout << "Rock beats scissors. Computer wins!\n";
                    break;
                }

            case('q'):
                return 0;
        }

        if (computer_choice_index < computer_choices.size() - 1) ++computer_choice_index;
        else computer_choice_index = 0;
        cout << "Type r, p or s to make your choice or q to quit\n";
    }

}

