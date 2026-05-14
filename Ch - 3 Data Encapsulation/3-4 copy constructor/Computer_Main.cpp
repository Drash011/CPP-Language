#include "Computer.cpp"

int main()
{
    Computer c1(512.45, 16, "i7");
    Computer c2(1000, 32, "i12");

    // Shallow Copy

    Computer c3 = c1;

    // Deep Copy
    Computer c4(c2);

    c1.getComputerData();
    c2.getComputerData();
    c3.getComputerData();
    c4.getComputerData();
}