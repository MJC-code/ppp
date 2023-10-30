// Programming Principles and Practice Using C++, Chapter 4, Excercise 8
// Calculate number of grains of rice on a chessboard if first square has 1, second 2, third 4 etc
// This code demonstrates that the integer counter overflows after 31 squares

#include "std_lib_facilities.h"

int main()
{
    int total = 0;
    int grains = 1;

    for (int i = 1; i <=64; i++) {
        total += grains;
        cout << "Square: " << i << " Grains: " << grains << " Total: " << total << '\n';
        grains *= 2;
    }
}
