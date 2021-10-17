#include <iostream>
/*
0-1 Pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
void pattern(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                std::cout << "1";
            }
            else
            {
                std::cout << "0";
            }
        }
        std::cout<<"\n";
    }
}

int main(int argc, char const *argv[])
{
    pattern(5);
    return 0;
}
