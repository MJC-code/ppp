// Programming Principles and Practice Using C++, Chapter 4, Excercise 5
// Simple calculator

#include "std_lib_facilities.h"

int main()
{
    while (1)
    {
    cout << "Please enter two numbers, followed by an operator (+, -, * or /) : ";
    float a, b;
    char operation;

    cin >> a >> b >> operation;

    if (operation == '+') cout << "The sum of " << a << " and " << b << " is " << a+b << ".\n";
    else if (operation == '-') cout << "The difference of " << a << " and " << b << " is " << a-b << ".\n";
    else if (operation == '*') cout << "The product of " << a << " and " << b << " is " << a*b << ".\n";
    else if (operation == '/') cout << "The quotient of " << a << " and " << b << " is " << a/b << ".\n";
    else cout << "Sorry, I don't understand that operation.\n";
    }

}



