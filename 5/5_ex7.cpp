// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 7
// Solve quadratic equations

#include <std_lib_facilities.h>

void solve_quadratic(float a, float b, float c)
{
    if (b * b - 4 * a * c < 0) {
        cout << "No real roots\n";
        return;
    }

    double solution1, solution2;
    solution1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    solution2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    if (solution1 == solution2) {
        cout << "The value of x is " << solution1 << '\n';
        return;
    }
    else {
        cout << "The two values of x are " << solution1 << " and " << solution2 << '\n';
        return;
    }
}

int main()
try {
    cout << "This program will solve quadratic equations in the form ax^2 + bx + c = 0\n";
    cout << "Please enter values for a, b and c: ";

    double a, b, c;
    cin >> a >> b >> c;

    solve_quadratic(a, b, c);
    return 0;
}

catch (exception& e) {
    cerr << "Runtime error: " << e.what();
    keep_window_open();
    return 1;
}
