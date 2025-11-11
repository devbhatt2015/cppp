#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        cout << a;
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int terms;
    cout << "Enter no of terms: ";
    cin >> terms;
    fibonacci(terms);
}

/*
OUTPUT

Enter no of terms: 10
0112358132134

*/