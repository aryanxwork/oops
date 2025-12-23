#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
    void add(const Complex &c)
    {
        real += c.real;
        img += c.img;
    }
};
int main()
{
    Complex c1(5, 5);
    Complex c2(10, 10);
    c1.add(c2);
    c1.display();
    return 0;
}
