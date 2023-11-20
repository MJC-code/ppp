// Programming Principles and Practice Using C++, Chapter 4, Excercise 15
// Find the first n prime numbers

#include "std_lib_facilities.h"

bool isPrime(int a);

vector<int> primes;


int main() {

    cout << "This program will find the first n primes. Please enter a value for n: ";
    int n;
    cin >> n;


    for (int i = 2;; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
            if (primes.size() >= n) break;
        }
    }

    cout << "\nThe first " << n << " primes are:\n";
    for (int a:primes) {
        cout << a << ' ';
    }
    cout << '\n';
}

bool isPrime(int a) {
    for(int i = 0; i < primes.size(); i++) {
        if (a % primes[i] == 0) return false;
    }
    return true;
}



