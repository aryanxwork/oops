#include <iostream>
using namespace std;
class Shape
{
protected:
    double val1;
    double val2;

public:
    void getdata(double x, double y);
    virtual void display() = 0;
};
void Shape::getdata(double x, double y)
{
    val1 = x;
    val2 = y;
}
class rectangle : public Shape
{
public:
    void display() override
    {
        cout << "area of rectangle = " << val1 * val2 << endl;
    }
};
class triangle : public Shape
{
public:
    void display() override
    {
        cout << "area of tiangle = " << 0.5 * val1 * val2 << endl;
    }
};
int main()
{
    rectangle r;
    r.getdata(2, 3);
    triangle t;
    t.getdata(4, 5);
    Shape *p[2];
    p[0] = &r;
    p[1] = &t;
    p[0]->display();
    p[1]->display();
}