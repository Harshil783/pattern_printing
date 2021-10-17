#include <iostream>
/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
using namespace std;

void pattern(int n)
{
    for (int i; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    pattern(5);
    return 0;
}