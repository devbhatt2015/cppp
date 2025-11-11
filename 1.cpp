#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is prime";
    else
        cout << num << " is not prime";
}

/*
OUTPUT

Enter a num: 23
23 is prime

*/