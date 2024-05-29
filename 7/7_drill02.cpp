/* 
 Programming Principles and Practice in C++, 2nd ed. Chapter 7  Drill 2
 Add comments to fixed code */

/*
Simple calculator. Input from cin, output to cout

---Grammar for input---
Calculation:
    Statement
    Print
    Quit 
    Calulation Statement

Statement:
    Declaration
    Expression

Declaration:
    "let" Name "=" Expression

Expression:
    Term
    Expression "+" Term
    Expression "-" Term
Term:
    Primary
    Term "*" Primary
    Term "/" Primary
    Term "%" Primary
Primary:
    Number
    "(" Expression ")"
    "-" Primary
    "+" Primary
Number:
    floating-point-literal



*/

#include "std_lib_facilities.h"

struct Token
{
    char kind;
    double value;
    string name;
    Token(char ch) : kind(ch), value(0) {}
    Token(char ch, double val) : kind(ch), value(val) {} // Constructor for Token representing a number

    Token(char ch, string n) : kind(ch), name{n} {} // This constructor missing from caclulator08buggy.cpp
    // 
};

class Token_stream
{
    bool full{false};
    Token buffer;

public:
    Token_stream() : full(false), buffer(0) {}  // changed from calculator08buggy.cpp

    Token get();
    void unget(Token t)
    {
        if(full) error("Putback() into a full buffer");
        buffer = t;
        full = true;
    }

    void ignore(char);
};

const char let = 'l';
const char quit = 'q';   // changed from 'Q' in calculator08buggy.cpp
const char print = ';';
const char number = '8';
const char name = 'a';
const string declkey = "let"; // missing line in calculator08buggy.cpp

Token Token_stream::get()  
// read characters from cin and compose a Token
{
    if (full)  // first check buffer to see if it already contains a Token. If so return that Token and clear buffer
    {
        full = false;
        return buffer;
    }
    // otherwise, assemble a Token by reading fron cin
    char ch;
    cin >> ch;

    switch (ch)
    {
    case print: // This line changed to use the constant print instead of ';'
    case quit:  // This line missing from calculator08buggy.cpp
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '=':
        return Token(ch);  // let each character represent itself
    // any of the following characters can begin a number, so put char back into input stream and use cin to read number
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    {
        cin.unget();
        double val;
        cin >> val;
        return Token(number, val); //assemble a Token of kind 'number'
    }
    default:
        if (isalpha(ch)) // otherwise, try to assemble a variable
        {
            string s;
            s += ch;
            while (cin.get(ch) && (isalpha(ch) || isdigit(ch)))
                s += ch;  // corrected from 's = ch' in calculator08buggy.cpp
            cin.unget();
            if (s == declkey)
                return Token(let);
            if (s == "quit")
                return Token(quit); //changed from Token(name) in calculator08buggy.cpp
            return Token(name, s);
        }
        error("Bad token");
    }
}

void Token_stream::ignore(char c)
// c represents the kind of Token
{
    // first look in buffer:
    if (full && c == buffer.kind)
    {
        full = false;
        return;
    }
    full = false;

    // now search input:
    char ch;
    while (cin >> ch)
        if (ch == c)
            return;
}

struct Variable
{
    string name;
    double value;
    Variable(string n, double v) : name(n), value(v) {}
};

vector<Variable> names;

double get_value(string s)
// return the value of the Variable named s
{
    for (int i = 0; i < names.size(); ++i)
        if (names[i].name == s)
            return names[i].value;
    error("get: undefined name ", s);
}

void set_value(string s, double d)
// set the Variable named s to d
{
    for (int i = 0; i <= names.size(); ++i)
        if (names[i].name == s)
        {
            names[i].value = d;
            return;
        }
    error("set: undefined name ", s);
}

bool is_declared(string s)
{
    for (int i = 0; i < names.size(); ++i)
        if (names[i].name == s)
            return true;
    return false;
}

double define_name(string var, double val)   // this whole function missing from calculator08buggy.cpp
// add (var, val) to names
{
    if (is_declared(var)) error(var, "declared twice");
    names.push_back(Variable(var, val));
    return val;
}

Token_stream ts;

double expression();

double primary()
{
    Token t = ts.get();
    switch (t.kind)
    {
    case '(':
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')')
            error("'(' expected");
        return d;  // This line missing from calculator08buggy.cpp
    }
    case '-':
        return -primary();
    case '+':
        return primary();
    case number:
        return t.value;
    case name:
        return get_value(t.name);
    default:
        error("primary expected");
    }
}

double term()
{
    double left = primary();
    while (true)
    {
        Token t = ts.get();
        switch (t.kind)
        {
        case '*':
            left *= primary();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0)
                error("divide by zero");
            left /= d;
            break;
        }
        default:
            ts.unget(t);
            return left;
        }
    }
}

double expression()
{
    double left = term();
    Token t = ts.get();  // moved out of while loop from calulator08buggy.cpp
    while (true)
    {
        switch (t.kind)
        {
        case '+':
            left += term();
            t = ts.get();
            break;
        case '-':
            left -= term();
            t = ts.get();
            break;
        default:
            ts.unget(t);
            return left;
        }
    }
}

double declaration()
    // assume we have seen "let"
    // handle: name = expression
    // declare a vaiable called "name" with the initial value 'expression'
{
    Token t = ts.get();
    if (t.kind != name)
        error("name expected in declaration");
    string name = t.name;
    if (is_declared(name))
        error(name, " declared twice");
    Token t2 = ts.get();
    if (t2.kind != '=')
        error("= missing in declaration of ", name);
    double d = expression();
    define_name(name, d);
    return d;
}

double statement()
{
    Token t = ts.get();
    switch (t.kind)
    {
    case let:
        return declaration();
    default:
        ts.unget(t);
        return expression();
    }
}

void clean_up_mess()
{
    ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{
    while (cin)  // changed from while(true) in calculator08buggy.cpp
        try
        {
            cout << prompt;
            Token t = ts.get();
            while (t.kind == print)
                t = ts.get();  // first discard all prints
            if (t.kind == quit)
                return;
            ts.unget(t);
            cout << result << statement() << endl;
        }
        catch (runtime_error &e)
        {
            cerr << e.what() << endl;
            clean_up_mess();
        }
}

int main()

try
{
    calculate();
    return 0;
}
catch (exception &e)
{
    cerr << "exception: " << e.what() << endl;
    char c;
    while (cin >> c && c != ';')
        ;
    return 1;
}
catch (...)
{
    cerr << "exception\n";
    char c;
    while (cin >> c && c != ';')
        ;
    return 2;
}
