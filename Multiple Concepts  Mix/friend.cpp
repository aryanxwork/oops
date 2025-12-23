#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Value of A is: " << a << endl;
    }
    friend void add(A, B);
    friend void swap(A &, B &);
};
class B
{
private:
    int b;

public:
    B(int y)
    {
        b = y;
    }
    void display()
    {
        cout << "Value of B is: " << b << endl;
    }
    friend void add(A, B);
    friend void swap(A &, B &);
};
void add(A objA, B objB)
{
    cout << "Sum of A and B is: " << (objA.a + objB.b) << endl;
}
void swap(A &objA, B &objB)
{
    int temp = objA.a;
    objA.a = objB.b;
    objB.b = temp;
}
int main()
{
    A objA(5);
    B objB(10);
    add(objA, objB);
    swap(objA, objB);
    add(objA, objB);
    objA.display();
    objB.display();
    return 0;
}
