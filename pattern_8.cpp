#include <iostream>
/*
Number pattern(idk the name! lol😂)
1 2 3 4 5 
1 2 3 4   
1 2 3     
1 2       
1
*/
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            std::cout << j<<" ";
        }
        std::cout << "\n";
    }
}

int main(int argc, char const *argv[])
{
    pattern(5);
    return 0;
}
