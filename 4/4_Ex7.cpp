// Programming Principles and Practice Using C++, Chapter 4, Excercise 7
// Simple calculator, modified to accept single digits as numbers or words

#include "std_lib_facilities.h"

int word_to_digit(string s);
int get_a_number();

vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    while (1)
    {
        cin.clear();
        cout << "Please enter two integers, followed by an operator (+, -, * or /) : ";
        int a = -99999999; // -99999999 is a hacky way of signalling invalid input
        int b = -99999999; // error() is not introduced until later in the book
        a = get_a_number();
        b = get_a_number();
        if (a==-99999999 || b == -99999999) {
            cout << "Sorry, I don't understand that input\n";
            cin.clear();  // also not introduced until later in book, but it's really hard to reset input stream without
            cin.ignore(10000, '\n'); // clears any other contents of cin
            continue;
        }

        char operation;
        cin >> operation;

        if (operation == '+') cout << "The sum of " << a << " and " << b << " is " << a+b << ".\n";
        else if (operation == '-') cout << "The difference of " << a << " and " << b << " is " << a-b << ".\n";
        else if (operation == '*') cout << "The product of " << a << " and " << b << " is " << a*b << ".\n";
        else if (operation == '/') cout << "The quotient of " << a << " and " << b << " is " << double(a)/b << ".\n";
        else {
            cout << "Sorry, I don't understand that operation.\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }

    }

}


int get_a_number()
{
    int n;
    if (cin >> n) return n;

    else {
        cin.clear();
        string s;
        cin >> s;
        return word_to_digit(s);
    }
}


int word_to_digit(string s)
{
    for(int i=0; i<words.size(); ++i)
    {
        if (words[i] == s) return i;
    }
    cin.clear();
    return -99999999;
}
