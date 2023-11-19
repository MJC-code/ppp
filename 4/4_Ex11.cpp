// Programming Principles and Practice Using C++, Chapter 4, Excercise 11
// Find prime numbers from 1 to 100, by checking whether each number can be divided by a prime smaller than itself

#include "std_lib_facilities.h"

bool isPrime(int a);

vector<int> primes = {2};


int main() {
    for (int i = 3; i <=100; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    for (int a:primes) {
        cout << a << '\n';
    }
}

bool isPrime(int a) {
    for(int i = 0; i < primes.size(); i++) {
        if (a % primes[i] == 0) return false;
    }
    return true;
}



