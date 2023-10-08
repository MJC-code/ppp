// From Programming: Principles and Practice 2nd edition, pg 85, Exercise 10
// Simple calculator, with no error checking

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter an operation, followed by two operands, eg + 100 3.14: ";
    string operation;
    cin >> operation;
    double operand1, operand2;
    cin >> operand1 >> operand2;

    if (operation == "+" || operation == "plus") cout << operand1 + operand2 << '\n';
    if (operation == "-" || operation == "minus") cout << operand1 - operand2 << '\n';
    if (operation == "*" || operation == "mul") cout << operand1 * operand2 << '\n';
    if (operation == "/" || operation == "div") cout << operand1 / operand2 << '\n';



    return 0;
}
