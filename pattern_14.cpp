#include <iostream>
/*
Number pattern
    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {

            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    pattern(5);
    return 0;
}
