#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void area() = 0;
};
class Circle : public Shape
{
private:
    float radius;

public:
    void input()
    {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }
    void area() override
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};
class Rectangle : public Shape
{
private:
    float length, width;

public:
    void input()
    {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }
    void area() override
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};
int main()
{
    Circle c;
    Rectangle r;
    cout << "Circle\n";
    c.input();
    c.area();
    cout << "Rectangle\n";
    r.input();
    r.area();
}

/*
OUTPUT

Circle
Enter radius of circle: 12
Area of Circle = 452.16
Rectangle
Enter length of rectangle: 12
Enter width of rectangle: 32
Area of Rectangle = 384

*/