// Programming Principles and Practice Using C++, Chapter 4, Excercise 6
// Use a vector to convert digit to spelled-out numbers and vice versa
// Requires cin.clear(), which Stroustrup doesn't introduce until Chapter 10!
// See https://www.stroustrup.com/Programming/Solutions/Ch4/e4-7.cpp for his solution,
// which also makes use of error(), introduced at a later stage in the book

#include "std_lib_facilities.h"

string digit_to_word(int n);
int word_to_digit(string s);

vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    cout << "Please enter a single digit, either as a digit or as a lowercase word: ";
    int n;
    if (cin >> n) cout << digit_to_word(n) << '\n';

    else {
        cin.clear();
        string s;
        cin >> s;
        cout << word_to_digit(s) << '\n';
    }

}

int word_to_digit(string s)
{
    for(int i=0; i<words.size(); ++i)
    {
        if (words[i] == s) return i;
    }
    return -9999;
}

string digit_to_word(int n)
{
    if (n>=0 && n<=9) return words[n];
    return "Error";
}
