#include <iostream>
/*
 I did this one when i was trying to figure how it happened pattern_10 and pattern_11 are figured out by me!
 when i figured it out i jumped with joy!
 Seriously how i did it!(idk lol!😂)
Rhombus

      * * * * * 
     * * * * *  
    * * * * *   
   * * * * *    
  * * * * * 
*/
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i-1; j--)
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
    pattern(5);
    return 0;
}
