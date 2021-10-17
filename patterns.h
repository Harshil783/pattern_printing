#include <iostream>

/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

void pattern1(int n)
{
    for (int i; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

/*
Pyramid
    *   
    * * 
    * * *
    * * * *
    * * * * *
*/
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}
/*
inverted half pyramid

* * * * *
* * * *
* * *
* *
*

*/
void pattern3(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

/*
Half Pyramid After 180 deg rotation
By putting the '*' (i suppose cause i forgot how i did?)
      *
    * *
  * * *
* * * *

By putting the '* '
    * 
   * *
  * * *
 * * * *
* * * * * 

*/

void pattern4(int n)
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
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}

void pattern4_2(int n)
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
                std::cout << "*";
            }
        }

        std::cout << "\n";
    }
}

/*
Number Traingles
    1 
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

*/
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << i + 1 << " ";
        }
        std::cout << "\n";
    }
}

/*
Flyod's Traingle
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

void pattern6(int n)
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

/*
Number pattern(idk the name! lol😂)
1 2 3 4 5 
1 2 3 4   
1 2 3     
1 2       
1
*/
void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}

/*
0-1 Pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
void pattern9(int n)
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
        std::cout << "\n";
    }
}

/*
    rhombus 180 deg version
* * * * 
 * * * * 
  * * * * 
   * * * * 
*/
void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            std::cout << " ";
        }
        for (int j = n; j >= 1; j--)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

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
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i - 1; j--)
        {
            std::cout << " ";
        }
        for (int j = n; j >= 1; j--)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

/*
NUmber pattern
    1     
   2 2    
  3 3 3   
 4 4 4 4  
5 5 5 5 5
*/
void pattern12(int n)
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
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
    }
}

/*
Number pattern
    5     
   4 5    
  3 4 5   
 2 3 4 5  
1 2 3 4 5
*/
void pattern13(int n)
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

/*
Number pattern
    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
void pattern14(int n)
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

/*
    Butterfly Pattern Solid
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
*/

void pattern7(int n)
{
    for (int i = 1; i <= n; i++) // for rows
    {
        for (int j = 1; j <= i; j++) //this is one for printing the first row *(asterisk)
        {
            std::cout << "*";
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++) // for printing spaces
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) // for printing * after spaces
        {
            std::cout << "*";
        }
        std::cout<<std::endl;
    }
    // for inverted part
    for (int i = n; i >=1; i--) // for rows
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout<<std::endl;
    }
}
