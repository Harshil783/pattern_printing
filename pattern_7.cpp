#include <iostream>

/*
    Butterfly Pattern Solid
    *      *
    **    **
    ***  ***
    ********
    ***    *
    **    **
    *      *

*/

void pattern(int n)
{
    for (int i = 1; i <= n; i++) // for rows
    {
        for (int j = 1; j <= i; j++) //this is one for printing the first row *(asterisk)
        {
            std::cout << "*";
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++) // for printing spaces
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) // for printing * after spaces
        {
            std::cout << "*";
        }
        std::cout<<std::endl;
    }
    // for inverted part
    for (int i = n; i >=1; i--) // for rows
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout<<std::endl;
    }
}

int main(int argc, char const *argv[])
{
    pattern(5);
    return 0;
}
