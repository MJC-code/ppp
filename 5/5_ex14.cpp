// Programming: Principles and Practice Using C++ (2nd ed) Chapter 5, Exercise 14
// Read (day-of-the-week, value) pairs from std input

#include <std_lib_facilities.h>
vector<int> Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
   
void get_input(void)
{
    string day;
    int value;
    while(true)
    {
        cin.clear();
        cin >> day;
        if (day == "|") return;
        cin >> value;
        if (day == "Monday" || day == "monday" || day == "Mon" || day == "mon") Monday.push_back(value);
        if (day == "Tuesday" || day == "tuesday" || day == "Tue" || day == "tue") Tuesday.push_back(value);
        if (day == "Wednesday" || day == "wednesday" || day == "Wed" || day == "wed") Wednesday.push_back(value);
        if (day == "Thursday" || day == "thursday" || day == "Thu" || day == "thu") Thursday.push_back(value);
        if (day == "Friday" || day == "friday" || day == "Fri" || day == "fri") Friday.push_back(value);
        if (day == "Saturday" || day == "saturday" || day == "Sat" || day == "sat") Saturday.push_back(value);
        if (day == "Sunday" || day == "sunday" || day == "Sun" || day == "sun") Sunday.push_back(value);
    }
}

void print_day(vector<int> day, string day_string)
{
    if (day.size() > 0)
    {
        cout << "The values you entered for " << day_string << " were: ";
        for (int i = 0; i < day.size(); i++)
        {
            cout << day[i] << " ";
        }
        cout << '\n';
        int sum = 0;
        for (int i = 0; i < day.size(); i++)
        {
            sum += day[i];
        }
        cout << "The total for " << day_string << " was " << sum << ".\n";
    }
}


int main()
{
    cout << "Please enter a series of day value pairs eg Tuesday 23 Friday 56. End by entering |\n";
    get_input();
    print_day(Monday, "Monday");
    print_day(Tuesday, "Tuesday");
    print_day(Wednesday, "Wednesday");
    print_day(Thursday, "Thursday");
    print_day(Friday, "Friday");
    print_day(Saturday, "Saturday");
    print_day(Sunday, "Sunday");

    return 0;
}