#include <iostream>
using namespace std;
class Complexno
{
public:
    int real;
    int img;
    Complexno(int i, int r)
    {
        real = r;
        img = i;
    }
    void show()
    {
        cout << real << "+" << img << "i" << endl;
    }
    void operator+(Complexno &c2)
    {
        int resreal = this->real + c2.real;
        int resimg = this->img + c2.img;
        Complexno c3(resimg, resreal);
        c3.show();
    }
};
int main()
{
    Complexno c1(2, 4);
    Complexno c2(8, 9);
    c1.show();
    c2.show();
    c1 + c2;

    return 0;
}