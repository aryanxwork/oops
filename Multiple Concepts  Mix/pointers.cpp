#include <iostream>
using namespace std;
class M
{
    int x; // private data
    int y;

public:
    void set(int a, int b)
    { // setter
        x = a;
        y = b;
    }
    friend int sum(M m); // friend declare
};
int sum(M m)
{
    int M::*px = &M::x;      // ptr to data member x
    int M::*py = &M::y;      // ptr to data member y
    M *pm = &m;              // ptr to object
    int s = m.*px + pm->*py; // (obj+dm pointer)+(obj ptr+dm pointer)
    return s;
}
int main()
{
    M n;
    void (M::*pf)(int, int) = &M::set; // ptr to member fx
    (n.*pf)(10, 20);                   // object to fx ptr
    cout << sum(n) << endl;
    M *op = &n;        // obj ptr
    (op->*pf)(30, 40); // obj ptr to member fx ptr
    cout << sum(n) << endl;
    return 0;
}