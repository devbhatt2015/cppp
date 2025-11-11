#include <iostream>
#include <cstring>
using namespace std;
int countWords(char str[])
{
    int count = 0, length = strlen(str);
    int i = 0;
    while (i < length && str[i] == ' ')
    {
        i++;
    }
    for (; i < length; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char sentence[200];
    cout << "Enter a string: ";
    cin.getline(sentence, 200);
    cout << "words = " << countWords(sentence);
}

/*
OUTPUT

Enter a string: a dasd  dff d
words = 4

*/