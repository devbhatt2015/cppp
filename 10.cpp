#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
    char name[50];
    int roll_no;
    float marks;

public:
    void input()
    {
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks;
    }
};
int main()
{
    Student s;
    s.input();
    s.display();
}

/*
OUTPUT

Enter name: vishesh
Enter roll no: 11
Enter marks: 80
Name: vishesh
Roll No: 11
Marks: 80

*/