// Write a program to overload + operator for performing addition of two template based class objects. 

// Create a class num with a private template type data member number. 
// Use a function input() to get the value of data member number at run time from user. A public 
// member function show() has to be used to display the sum as output. 
// overload + operator for performing addition of two template based class objects ( i.e. addition of 
// two objects having data type of number as int and addition of two objects having data type of 
// number as double )
// Write the appropriate main function.
#include <iostream>
using namespace std;
template <typename T>
class Num
{
    T data;

public:
    void input()
    {
        T x;
        cout << "enter value : ";
        cin >> x;
        data = x;
    }
    void show()
    {
        cout << x << endl;
    }
    T operator+(Num &obj)
    {
        this->x += obj.x;
        return this;
    }
};
int main()
{
    Num<int> n1;
    Num<int> n2;
    n1.input();
    n2.input();
    Num<double> n3;
    Num<double> n4;
    n3.input();
    n4.input();
    n1 + n2;
    n3 + n4;
    n1.show();
    n3.show();
    return 0;
}
