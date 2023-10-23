// Programming Principles and Practice Using C++, Chapter 4, Excercise 3
// Read a sequence of doubles into a vector, representing distances between neighbouring cities on a route.
// Find smallest, largest and mean difference between cities.

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a series of numbers representing distances on a route. Type '|' to finish entry: \n";
    vector<double> distances;
    for (double temp; cin >> temp;)
        distances.push_back(temp);

    sort(distances);

    cout << "Smallest distance: " << distances[0] << '\n';
    cout << "Largest distance: " << distances[distances.size()-1] << '\n';

    double total_distance = 0;
    for (double i: distances) total_distance += i;

    cout << "Total distance: " << total_distance << '\n';
    cout << "Mean distance: " << total_distance /distances.size() << '\n';

    return 0;

}



