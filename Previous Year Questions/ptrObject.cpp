//  Write a program in C++ having the following properties: 
// (3 marks) 
// • Define a class having two data variables of integer type in private scope. 
// • Array of objects should be declared in main function dynamically (using new 
// operator) 
// • Input the data variables using a member function named as void set_data() in 
// public scope. 
// • Increment the values of data variables by one using a member function named 
// void update_data() in public scope having array of object as an argument. 
// • For displaying the updated value of data variables, create a member function 
// named as void output() in public scope. 
#include <iostream>
using namespace std;
class Base
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void updatedata(Base obj[])
    {
        int n = sizeof(obj) / sizeof(obj[0]);
        for (int i = 0; i < n; i++)
        {
            obj[i].a += 1;
            obj[i].b += 1;
        }
    }
    void output(Base obj[])
    {
        int n = sizeof(obj) / sizeof(obj[0]);
        for (int i = 0; i < n; i++)
        {
            cout << obj[i].a << endl;
            cout << obj[i].b << endl;
        }
    }
};
int main()
{
    Base *ptr = new Base[5];
    for (int i = 0; i < 5; i++)
    {
        int x, y;
        cout << "enter values : ";
        cin >> x >> y;
        ptr[i].setdata(x, y);
    }
    ptr[0].updatedata(ptr);
    ptr[0].output(ptr);

    return 0;
}
