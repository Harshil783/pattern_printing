#include <iostream>
/*
    rhombus 180 deg version
* * * * 
 * * * * 
  * * * * 
   * * * * 
*/
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i-1; j++)
        {
            std::cout << " ";
        }
        for (int j = n; j >=1; j--)
        {
            std::cout << "* ";
        }
        std::cout<<"\n";
    }
}

int main(int argc, char const *argv[])
{
    pattern(4);
    return 0;
}
