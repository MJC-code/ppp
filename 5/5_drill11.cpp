// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Drill 11
#include "std_lib_facilities.h"

int main()
try {
    string s = "ape";
    if (s +"fool" == "apefool") cout << "Success!\n";
    keep_window_open();
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
