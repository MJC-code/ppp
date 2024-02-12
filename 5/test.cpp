// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 13
// "Bulls and Cows" guessing game.
// Guess 4 unique integers - 'bull' = right digit, right position; 'cow' = right digit, wrong position
// Exercise modified to generate random answer each game

#include <std_lib_facilities.h>
vector<int> answer { 1, 2, 3, 4};

int main()
{
    for (int i=0; i<answer.size(); ++i)
    {
        answer[i] = randint(9);
    }
    for (int i: answer) cout << i << ' ';
         cout << '\n';
    
}
