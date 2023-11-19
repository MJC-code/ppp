// Programming Principles and Practice Using C++, Chapter 4, Excercise 14
// Find prime numbers from 1 to 100 using the Sieve of Eratosthenes
// vector<bool> has some unusual interactions with std_lib_facilities
// (see https://stackoverflow.com/questions/71429627/trying-to-change-a-value-in-a-vector-bool), so
// I've ended up rewriting to use a vector of ints (0 for false, 1 for true)

#include "std_lib_facilities.h"

vector<int> primes;  // will finish with 0 for each non prime, 1 for each prime

int main() {
    cout << "Find all prime numbers up to what maximum? ";
    int max;
    cin >> max;

    for (int i=0; i <= max; i++)  primes.push_back(1);  // initialize array with size of search space


    for (int i=2; i < primes.size(); i++) {
        if (primes[i] == 1) {
            for (int j = i * 2; j < primes.size(); j+=i) {
                primes[j] = 0;
            }
        }
    }

    for (int i=2; i < primes.size(); i++) {if (primes[i] == 1) cout << i << ' ';}
    cout << '\n';
}



