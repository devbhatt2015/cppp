#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int search)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == search)
            return mid;
        else if (search > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    int result = binarysearch(arr, n, key);
    if (result == -1)
        cout << "Not found";
    else
        cout << "found at position " << result;
}

/*
OUTPUT

Enter number of elements: 5
1
2
3
4
5
Enter the element to search: 3
found at position 2

*/