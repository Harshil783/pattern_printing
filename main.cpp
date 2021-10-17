#include <iostream>
#include "patterns.h"

int main(int argc, char const *argv[])
{
    std::cout << "\t\t\t\t\t\tAll The Patterns";
    int n = 5;
    std::cout << "\n";
    std::cout<<"Rectangle\n";
    pattern1(n);
    std::cout << "\n";

    std::cout<<"Right Pyramid\n";
    pattern2(n);
    std::cout << "\n";
    
    std::cout<<"Inverted half pyramid\n";
    pattern3(n);
    std::cout << "\n";

std::cout<<"Chritmas Tree\n";
    pattern4(n);
    std::cout << "\n";

std::cout<<"Half Pyramid after 180 deg rotation\n";
    pattern4_2(n);
    std::cout << "\n";

std::cout<<"\t\t\t\t\t\tNumber Patterns\n";
    pattern5(n);
    std::cout << "\n";

    pattern6(n);
    std::cout << "\n";

    pattern8(n);
    std::cout << "\n";

    pattern9(n);
    std::cout << "\n";

    std::cout<<"rhombus 180 deg rotation\n";
    pattern10(n);
    std::cout << "\n";

std::cout<<"rhombus\n";
    pattern11(n);
    std::cout << "\n";

std::cout<<"Number Traingles\n";
    pattern12(n);
    std::cout << "\n";

    pattern13(n);
    std::cout << "\n";

    pattern14(n);
    std::cout << "\n";
    
    std::cout<<"Butterfly Pattern Solid\n";
    pattern7(n);
    std::cout << "\n";

    return 0;
}
