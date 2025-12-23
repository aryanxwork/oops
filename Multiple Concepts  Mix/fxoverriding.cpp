#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "parent class function called" << endl;
    }
};

class child : public Parent
{
public:
    void show()
    {
        cout << "child class function called" << endl;
    }
};
int main()
{
    child c1;
    c1.show(); // compiler doesn't know which show fucntion to run, it is decided at run-time
}