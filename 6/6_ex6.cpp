// Programming Principles and Practice Using C++, Chapter 6, Excercise 6
// Check if a sentence is grammatically correct according to the grammar in Chapter 6.4.1

#include "std_lib_facilities.h"

vector<string> verbs{"rules", "fly", "swim"};
vector<string> nouns{"birds", "fish", "C++"};
vector<string> conjunctions{"and", "or", "but"};
vector<string> articles{"the"};

bool is_in(string word, vector<string> word_list)
{
    for (int i=0; i<word_list.size(); ++i)
    {
        if(word == word_list[i]) return true;
    }
    return false;
}


int main()
try
{

    for (string word; cin >> word;)
    {
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