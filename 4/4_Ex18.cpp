// Programming Principles and Practice Using C++, Chapter 4, Excercise 18
// Solve quadratic equations in the form ax^2 + bx + c = 0

#include "std_lib_facilities.h"


int main()
{

    cout << "This program will solve quadratic equations in the form ax^2 + bx + c = 0.\n"
    << "Please enter values for a, b and c: ";

    float a, b, c;
    cin >> a >> b >> c;

    if (b*b - 4 * a * c < 0) {
        cout << "This equation has no real roots.\n";
        exit (0);
    }

    float x1 = (-b + (sqrt(b * b - (4 * a * c))))/ (2*a);
    float x2 = (-b - (sqrt(b * b - (4 * a * c))))/ (2*a);

    if (b*b - 4 * a * c == 0) {
        cout << "This equation has one real root, x = " << x1 << '\n';
        exit (0);
    }

    else {
        cout << "The two real solutions of this equation are x = " << x1 << " and x =  " << x2 << '\n';
        exit (0);
    }
}
