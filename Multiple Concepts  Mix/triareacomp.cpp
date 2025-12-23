#include <iostream>
using namespace std;
class Triangle
{
    int base;
    int height;

public:
    int area;
    Triangle(int b, int h)
    {
        base = b;
        height = h;
        area = (h * b) / 2;
    }
    static void comparea(Triangle &t1, Triangle &t2);
};
void Triangle::comparea(Triangle &t1, Triangle &t2)
{
    if (t1.area > t2.area)
    {
        cout << "First triangle has larger area" << endl;
    }
    else
    {
        cout << "second triangle has larger area" << endl;
    }
}
int main()
{
    Triangle t1(2, 3);
    Triangle t2(5, 4);
    Triangle::comparea(t1, t2);
}