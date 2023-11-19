// Programming Principles and Practice Using C++, Chapter 4, Excercise 12
// Find prime numbers from 1 to user specified maximum
// by checking whether each number can be divided by a prime smaller than itself

#include "std_lib_facilities.h"

bool isPrime(int a);

vector<int> primes = {2};


int main() {

    cout << "Please enter a number to display all of the primes up to that number: ";
    int max;
    cin >> max;

    for (int i = 3; i <=max; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    for (int a:primes) {
        cout << a << ' ';
    }
}

bool isPrime(int a) {
    for(int i = 0; i < primes.size(); i++) {
        if (a % primes[i] == 0) return false;
    }
    return true;
}



