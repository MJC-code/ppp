// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Drill 21
#include "std_lib_facilities.h"

int main()
try {
    int x = 2;
    double d = 5/(x/2);
    if (d== 2*x+1) cout << "Success!\n";

    return 0;
}

catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}

catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
