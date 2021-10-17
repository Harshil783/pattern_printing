#include <iostream>
/*
inverted half pyramid

* * * * *
* * * *
* * *
* *
*

*/
void pattern(int n)
{
    for (int i = n; i>=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
    
}

int main()
{
    pattern(5);
    return 0;
}