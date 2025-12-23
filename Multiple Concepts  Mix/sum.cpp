#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number(int n)
    {
        num = n;
    }
    int getValue()
    {
        return num;
    }
    void sum(Number n)
    {
        num += n.num;
    }
};

int main()
{
    Number num1(5);
    cout << "The value is: " << num1.getValue() << endl;
    Number num2(10);
    cout << "The value is: " << num2.getValue() << endl;
    num1.sum(num2);
    cout << "After summing, num1 is: " << num1.getValue() << endl;
    Number *ptr;
    ptr = &num1;
    cout << "The value is: " << ptr->getValue() << endl;
    cout << "The value is: " << (*ptr).getValue() << endl;

    return 0;
}