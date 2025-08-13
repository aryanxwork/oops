#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    virtual void show()
    {
        cout << "parent class fucntion called" << endl;
    }
};

class child : public Parent
{
public:
    void show()
    {
        cout << "child class fucntion called" << endl;
    }
};
int main()
{
    child c1;
    Parent *ptr;
    ptr = &c1;   // run time binding
    ptr->show(); // virtual function
}