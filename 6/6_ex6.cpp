// Programming Principles and Practice Using C++, Chapter 6, Excercise 6
// Check if a sentence is grammatically correct according to the grammar in Chapter 6.4.1

#include "std_lib_facilities.h"

vector<string> verbs{"rules", "fly", "swim"};
vector<string> nouns{"birds", "fish", "C++"};
vector<string> conjunctions{"and", "or", "but"};
vector<string> articles{"the"};

bool is_in(string word, const vector<string> word_list)
{
    for (int i = 0; i < word_list.size(); ++i)
    {
        if (word == word_list[i])
            return true;
    }
    return false;
}

bool is_sentence()
{
    string word;
    cin >> word;
    if (!is_in(word, nouns)) return false;
    
    cin >> word;
    if (!is_in(word, verbs)) return false;

    cin >> word;
    if (word == ".") return true;
    else if (!is_in(word, conjunctions)) return false;

    return is_sentence();
}

int main()
try
{
    cout << "Please enter a sentence to evaluate its grammar.\n"
    << "Grammatical sentences must finish with a space-delimited full stop.\n"
    << "Recognised words are birds fish C++ rules fly swim and or but.\n";

    while (true)
    {
    if (is_sentence()) cout << "That was a sentence.\n";
    else cout << "That was not a sentence.\n";
    cin.clear();
    }

    return 0;
}
catch (exception &e)
{
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    return 2;
}
