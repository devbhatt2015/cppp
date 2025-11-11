#include <iostream>
using namespace std;
void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cout << "Enter two x and y: ";
    cin >> x >> y;
    swapNumbers(x, y);
    cout << "After swapping: x = " << x << ", y = " << y;
}

/*
OUTPUT

Enter two x and y: 1
2
After swapping: x = 2, y = 1

*/