#include <iostream>
/*
NUmber pattern
    1     
   2 2    
  3 3 3   
 4 4 4 4  
5 5 5 5 5
*/
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <=n - i)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << i<<" ";
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
