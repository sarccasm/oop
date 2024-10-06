#include "Circle.h"
#include <iostream>

int main()
{
    Circle c1;
    c1.printInfo();

    Circle c2(3, 3, 4);
    c2.printInfo();

    Circle c3 = c2;
    c3.printInfo();

    Circle c100(c1);
    c100.printInfo();

    c2.inputInfo();
    c2.printInfo();

    Circle c4;
    c4 = c1;
    std::cout << "Після оператора присвоєння для c1 до c4: " << std::endl;
    c4.printInfo();

    Circle c5, c6, c7;
    c7 = c6 = c5 = c2 = c4 = c2;
    c7.printInfo();
    c6.printInfo();
    c5.printInfo();
    c2.printInfo();

    Circle c8 = c1 + c2;
    std::cout << "Після оператора + для c1 і c2: " << std::endl;
    c8.printInfo();

    Circle c9 = c1 - c2;
    std::cout << "Після оператора - для c1 і c2: " << std::endl;
    c9.printInfo();

    Circle c10 = c1 * c2;
    std::cout << "Після оператора * для c1 і c2: " << std::endl;
    c10.printInfo();

    return 0;
}
