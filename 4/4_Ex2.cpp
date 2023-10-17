// Programming Principles and Practice Using C++, Chapter 4, Excercise 2
// Read temperatures into a vector, compute mean and median temperatures
// Fixed version to calculate median for an even number of entries, by averaging the middle two numbers

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a series of numbers. Type '|' to finish entry: \n";
    vector<double> temps;
    for (double temp; cin >> temp;)
        temps.push_back(temp);

    // compute mean and median temperatures
    double sum = 0;
    for (int x: temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature
    sort (temps);
    if (temps.size() % 2 != 0) cout << "Median temperature: " << temps[temps.size()/2] << '\n';
    else {
        int index = temps.size() / 2 - 1;
        double avg_of_middle_temps = (temps[index] + temps[index+1]) / 2;
        cout << "Median temperature: " <<avg_of_middle_temps << '\n';

    return 0;
    }


}



