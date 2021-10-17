#include <iostream>

/*
Flyod's Traingle
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

void pattern(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << count << " ";
            count++;
        }
        std::cout << "\n";
    }
}

int main(int argc, char const *argv[])
{
    pattern(5);
    return 0;
}
