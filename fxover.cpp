#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "fucntion with integer parameter called" << endl;
    }
    void show(string y)
    {
        cout << "fucntion with string parameter called" << endl;
    }
};
int main()
{
    Print p1;
    p1.show(25);      // will call first function
    p1.show("hello"); // will call second function
}