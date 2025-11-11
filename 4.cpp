#include <iostream>
using namespace std;
void copyString(char dest[], const char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
}
int main()
{
    char str1[100], str2[100];
    cout << "Enter a string: ";
    cin.getline(str1, 100);
    copyString(str2, str1);
    cout << "Copied string = " << str2;
}

/*
OUTPUT

Enter a string: asdf
Copied string = asdf

*/