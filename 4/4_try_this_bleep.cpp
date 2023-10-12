// Programming Principles and Practice Using C++, pg 125
// Reads string, outputs it replacing disliked words with 'BLEEP'

#include "std_lib_facilities.h"

int main()
{
    vector<string> disliked = {"Broccoli", "broccoli", "bananas", "Bananas"};
    vector<string> sentence;

    cout << "Please type in a sentence then press Control-D \n";

    for (string temp; cin >> temp; )
    {
        sentence.push_back(temp);
    }

    for(string word: sentence)
    {
        for (int i=0; i <disliked.size(); i++)
        {
            if (word == disliked[i]) {
                cout << "BLEEP ";
                break;
            }
            if (i == disliked.size()-1) cout << word << " ";
        }
    }
}
