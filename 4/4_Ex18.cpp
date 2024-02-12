// Programming Principles and Practice Using C++, Chapter 4, Excercise 18
<<<<<<< HEAD
// Quadratic equation solver
=======
// Solve quadratic equations in the form ax^2 + bx + c = 0
>>>>>>> 2a2f7bbaa56acff8dbdbc8d8f7e2f218e4e21e1e

#include "std_lib_facilities.h"


int main()
{

<<<<<<< HEAD
    cout << "This program solves quadratic equations of the form ax^2 + bx + c = 0.\n";
    cout << "Please enter values for a, b and c: ";
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0)
    {
            cout << "Zero value for a means that this is not a quadratic equation. Exiting.\n";
            exit (0);
    }

    if (b * b - 4 * a * c < 0)
    {
        cout << "This equation has no real roots. Exiting.\n";
        exit (0);
    }


    double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    if (x1 == x2) cout << "The single real solution of " << a << "x^2 + " << b << "x + " << c << " = 0 is " << x1 << '\n';

    else cout << "The two real solutions of " << a << "x^2 + " << b << "x + " << c << " = 0 are " << x1 << " and " << x2 <<'\n';

    return 0;
=======
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
>>>>>>> 2a2f7bbaa56acff8dbdbc8d8f7e2f218e4e21e1e
}
