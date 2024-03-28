// Programming: Principles and Practice Using C++ (2nd ed) Chapter 6, Exercise 10
// Read two integers, calculate either permutations or combinations for those two numbers

// 28/3/24 Added 'permutations2' function, which simplifies the division for permutation calculation
// and allows eg P(24, 3) which overflows the original permutations function, as any calculating any factorial
// larger than 20 will overflow a long int.

#include <std_lib_facilities.h>

long factorial (long a)
{
    long total = 1;
    for (int i = 1; i<=a; i++) 
    {
        total *= i;
        if (total<0) error("Factorial overflowed.");
    }
    return total;
    
}
long permutations(long a, long b) 
{
    return factorial(a) / factorial(a-b);
}

long permutations2(long a, long b)
{
    long total = 1;
    for (int x=a; x > a - b; x--)
    {
        total *= x;
        if (total < 0) error("Factorial overflow in permutations2");
    }
    return total;

}
long combinations(long a, long b)
{
    return permutations2(a, b) / factorial(b);
}

int main()
try
{
    cout << "This program will calculate the possible permutations or combinations of two numbers.\n";
    long a, b;
    while (true)
    {
    cout << "Please enter two numbers, the first for how many possible numbers there are, and the second\n"
            "for the number of combinations/permutations (second number must not be larger than the first): ";
        cin >> a >> b;
        if(!std::cin)
        {
            cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (a < 1 || b < 1)
        {
            cout << "Both numbers must be positive.\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (b > a)
        {
            cout << "Second number must not be larger than the first.\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        break;
    }

    char operation = 'x';
    while (toupper(operation) != 'P' && toupper(operation) != 'C')
    {
        cout << "Please enter p to calculate permutations or c to calculate combinations: ";
        cin >> operation;
    }

    if(toupper(operation) == 'P')
    {
        long answer = permutations2(a,b);
        cout << "There are " << answer << " possible permutations for ";
        cout << b << " out of " << a << " numbers.\n";
        exit(0);
    }

  if(toupper(operation) == 'C')
    {
        long answer = combinations(a,b);
        cout << "There are " << answer << " possible combinations for ";
        cout << b << " out of " << a << " numbers.\n";
        exit(0);
    }
    
}

catch (exception &e)
{
    cout << "Error: " << e.what() << '\n';
}
