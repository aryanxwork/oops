#include <iostream>
#include <string>
using namespace std;

class Draw
{
public:
    virtual void draw() = 0; // pure virtual fucntion, no object can be created , just for inheritance for other classes
};
class Circle : public Draw
{
public:
    void draw()
    {
        cout << "circle drawn" << endl;
    }
};
class Triangle : public Draw
{
public:
    void draw()
    {
        cout << "triangle drawn" << endl;
    }
};
int main()
{
    Circle c1;
    Triangle t1;
    
    c1.draw();
    t1.draw();
}