#include <iostream>
using namespace std;
class Complex
{
public:
    double real;
    double imag;
    void set(double r, double i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex operator+(const Complex &c)
    {
        this->real += c.real;
        this->imag += c.imag;
        return *this;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.set(2.5, 3.5);
    c2.set(1.5, 2.5);
    c3 = c1 + c2; // Using overloaded + operator
    c3.display(); // Display the result
    return 0;
}
