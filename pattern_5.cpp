#include <iostream>

/*
Number Traingles
    1 
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

*/
void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << i+1<<" ";
        }
        std::cout << "\n";
    }
}

int main()
{
    pattern(5);
}