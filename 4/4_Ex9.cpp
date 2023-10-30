// Programming Principles and Practice Using C++, Chapter 4, Excercise 9
// Calculate number of grains of rice on a chessboard if first square has 1, second 2, third 4 etc
// This code replaces the integer counter with doubles, showing that the total overflows on the 64th square

#include "std_lib_facilities.h"

int main()
{
    double total = 0;
    double grains = 1;

    for (int i = 1; i <=64; i++) {
        total += grains;
        cout << "Square: " << i << " Grains: " << grains << " Total: " << total << '\n';
        grains *= 2;
    }
}
