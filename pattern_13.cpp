#include <iostream>
/*
Number pattern
    5     
   4 5    
  3 4 5   
 2 3 4 5  
1 2 3 4 5
*/
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    pattern(5);
    return 0;
}
