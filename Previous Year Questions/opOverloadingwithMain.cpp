// a) Implement a class for the main ( ) function given below: 
// int main 0 { 
// Demo d1(10); Demo d2(20); 
// if(d1==d2) 
// cout<<"both are equal"<<endl; 
// else 
// cout<<"not equal"<<endl; 
// if(d1<d2) 
// cout<<"dl is less than d2"<<endl; 
// else 
// cout<<"d2 is less than dl"<<endl; } 
#include <iostream>
using namespace std;
class Demo
{
    int x;

public:
    Demo(int x)
    {
        this->x = x;
    }
    bool operator==(Demo &d2)
    {
        if (this->x == d2.x)
        {
            return true;
        }
        else
            return false;
    }
    bool operator<(Demo &d2)
    {
        if (this->x < d2.x)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    Demo d1(10);
    Demo d2(20);
    if (d1 == d2)
    {
        cout << "both are equal" << endl;
    }
    else
        cout << "both are not equal" << endl;

    if (d1 < d2)
    {
        cout << "d1 is less than d2" << endl;
    }
    else
        cout << "d2 is less than d1" << endl;
}
