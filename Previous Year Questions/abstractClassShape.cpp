//  Write a program in C++ to 
// Create a base class shape. Use this class to store two double type values (vall and 
// val2) that could be used to compute the area of figures. 
// Derive two specific classes called triangle and rectangle from the base class shape. Define a 
// member function get_data() of the base class to interactively initialise base class data members 
// and an another member function display_area() to compute and display the area of figures. Make 
// display_area() as a pure virtual function and redefine this function in the derived classes to suit 
// their requirements. 
// Using these three classes, design a program that will accept dimensions of a triangle 
// and a rectangle interactively from the user, and display the area by using array of base class 
// pointers (or use multiple pointers to the base class objects) to the derived classes. 
// Define each member function outside the class. 
// The two values given as input will be treated as lengths of two sides in case of rectangles, and as base and 
// height in the case of triangles, and used as follows: 
// Area of rectangle = vall*val2 
// Area of triangle = 0.5 *vall*val2
#include <iostream>
using namespace std;
class Shape
{
protected:
    double v1;
    double v2;

public:
    virtual void display() = 0;
};
class Rectangle : public Shape
{
public:
    void getdata(int a, int b);
    void display();
};
void Rectangle ::getdata(int a, int b)
{
    v1 = a;
    v2 = b;
}
void Rectangle ::display()
{
    cout << v1 * v2 << endl;
}

class Triangle : public Shape
{
public:
    void getdata(int a, int b);
    void display();
};
void Triangle ::getdata(int a, int b)
{
    v1 = a;
    v2 = b;
}
void Triangle ::display()
{
    cout << 0.5 * v1 * v2 << endl;
}
int main()
{
    int x, y;
    cout << "enter dimensions for tiangle : ";
    cin >> x >> y;
    Triangle t;
    t.getdata(x, y);
    int a, b;
    cout << "enter dimensions for Rectangle : ";
    cin >> a >> b;
    Rectangle r;
    r.getdata(a, b);
    Shape *ptr[2];
    ptr[0] = &t;
    ptr[1] = &r;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}
