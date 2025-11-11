#include <iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};
int main()
{
    Calculator calc;
    int x = 5, y = 10;
    double p = 2.5, q = 3.7;
    cout << "Addition of integers : " << calc.add(x, y) << endl;
    cout << "Addition of doubles : " << calc.add(p, q) << endl;
}

/*
OUTPUT

Addition of integers : 15
Addition of doubles : 6.2

*/