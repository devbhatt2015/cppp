#include <iostream>
#include <cstring>
using namespace std;
class Car
{
private:
    char brand[50];
    float price;

public:
    void input()
    {
        cout << "Enter car brand: ";
        cin.getline(brand, 50);
        cout << "Enter car price: ";
        cin >> price;
        cin.ignore();
    }
    void display()
    {
        cout << "\nCar Brand : " << brand;
        cout << "\nCar Price : " << price;
    }
};
int main()
{
    int n;
    cout << "Enter no. of cars: ";
    cin >> n;
    cin.ignore();
    Car cars[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Car " << i + 1 << ":\n";
        cars[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nCar " << i + 1 << ":\n";
        cars[i].display();
    }
}

/*
OUTPUT

Enter no. of cars: 3

Enter details for Car 1:
Enter car brand: bmw
Enter car price: 100000000

Enter details for Car 2:
Enter car brand: audi
Enter car price: 100000000

Enter details for Car 3:
Enter car brand: rr
Enter car price: 100000000000

Car 1:

Car Brand : bmw
Car Price : 1e+008
Car 2:

Car Brand : audi
Car Price : 1e+008
Car 3:

Car Brand : rr
Car Price : 1e+011

*/