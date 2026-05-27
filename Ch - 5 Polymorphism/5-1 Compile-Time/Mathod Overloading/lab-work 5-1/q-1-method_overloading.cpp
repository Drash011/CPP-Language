#include <iostream>
using namespace std;

class Maths
{
protected:
    int a, b;
    int m, n, o;
    int p, q, r, s;
    int e, f, g, h, i;
};

class MathCalculation : public Maths
{
public:
    void calculate(int a, int b)
    {
        cout << endl
             << "Devision\t: " << a / b << endl;
    }

    void calculate(int m, int n, int o)
    {
        cout << endl
             << "Subtraction\t: " << m - n - o << endl;
    }

    void calculate(int p, int q, int r, int s)
    {
        cout << endl
             << "Multipication\t: " << p * q * r * s << endl;
    }

    void calculate(int e, int f, int g, int h, int i)
    {
        cout << endl
             << "Addition\t: " << e + f + g + h + i << endl;
    }
};