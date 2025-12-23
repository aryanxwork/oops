#include<iostream>
using namespace std;

class Base{
    int x;
    protected:
    int pro;
    public:
    Base(int val) : x(val) {}
    void display() const {
        cout << "Value of x: " << x << endl;
    }
    int a;
};
class PublicDerived : public Base {
    int y;
    void change(int value){
        pro = value;
        
    }
    
};
class ProtectedDerived : protected Base {
    int z;
    void set(int value){
        pro = value;
        
    }
    
    
};
class PrivateDerived : private Base {
    int i;
    
     void sset(int value){
        pro = value;
        
    }
};
