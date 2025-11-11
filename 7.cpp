#include <iostream>
using namespace std;
void addMatrix(int A[][10], int B[][10], int C[][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
int main()
{
    int r, c;
    cout << "Enter no of rows: ";
    cin >> r;
    cout << "Enter no of columns: ";
    cin >> c;
    int A[10][10], B[10][10], C[10][10];
    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> B[i][j];
        }
    }
    addMatrix(A, B, C, r, c);
    cout << "\nSum :\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << C[i][j] << " ";
        }
    }
}

/*
OUTPUT

Enter no of rows: 2
Enter no of columns: 2

Enter elements of Matrix A:
12
23
45
34

Enter elements of Matrix B:
23
45
34
23

Sum :
35 68 79 57

*/