#include <iostream>
using namespace std;
int diagonalSum(int A[][10], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i][i];
    }
    return sum;
}
int main()
{
    int n;
    int A[10][10];
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    int result = diagonalSum(A, n);
    cout << "Sum = " << result;
}

/*
OUTPUT

Enter size of square matrix (n x n):
2
Enter elements of the matrix:
1
2
3
4
Sum = 5

*/