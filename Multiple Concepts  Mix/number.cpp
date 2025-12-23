#include<iostream>
using namespace std;
class Number {
    protected:
    int value;
    public:
    Number(int v) : value(v) {}
    int getValue() const {
        return value;
    }
};
class Square : public Number{
    public:
    Square(int v) : Number(v) {}
    int sq(){
        return getValue() * getValue();
    }
};
int main() {
    Number num(5);
    cout << "The value is: " << num.getValue() << endl;
    Square sq(5);
    cout << "The square of the value is: " << sq.sq() << endl;
    return 0;
}