#include <iostream>
using namespace std;

class Area
{
private:
    int len;
    int wid;

public:
    Area(int l, int w)
    {
        len = l;
        wid = w;
    }
    int getArea()
    {
        return len * wid;
    }
};
int main()
{
    Area arr[3] = {Area(10, 20), Area(20, 30), Area(30, 40)};
    for (int i = 0; i < 3; i++)
    {
        cout << "Area of rectangle " << i + 1 << " is: " << arr[i].getArea() << endl;
    }
    return 0;
}