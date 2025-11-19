#include <iostream>
#include <cstring>
using namespace std;
class Person
{
protected:
    char name[50];
    int age;

public:
    void inputPerson()
    {
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};
class Student : public Person
{
private:
    float marks;

public:
    void inputStudent()
    {
        inputPerson();
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayStudent()
    {
        displayPerson();
        cout << "Marks: " << marks;
    }
};
int main()
{
    Student s;
    s.inputStudent();
    s.displayStudent();
}

/*
OUTPUT

Enter name: Dev
Enter age: 18
Enter marks: 80
Name : Dev
Age  : 18
Marks: 80

*/
