// From Programming: Principles and Practice 2nd edition, pg 84, Drill 4

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name of the person you want to write to (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "Please enter the first name of a friend (followed by 'enter'): ";
    string friend_name;
    cin >> friend_name;
    cout << "Is the friend male or female? Please enter m or f: ";
    char friend_sex = 0;
    cin >> friend_sex;
    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I am very well. ";
    cout << "I will be back in town for a few days from November 3.\n";
    cout << "Have you seen " << friend_name << " lately? ";

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    return 0;
}
