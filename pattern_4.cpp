#include <iostream>

/*
Half Pyramid After 180 deg rotation

      *
    * *
  * * *
* * * *

    * 
   * *
  * * *
 * * * *
* * * * * 

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
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if(j<=n-i){
                std::cout<<" ";
            }
            else{
                std::cout<<"*";
            }
        }
        
        std::cout<<"\n";
    }
    
}

int main()
{
    pattern(5);
    pattern2(5);
    return 0;
}