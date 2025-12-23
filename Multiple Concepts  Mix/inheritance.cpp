#include<iostream>
#include<string>
using namespace std;

class Animal{
public : 
    string color;

    void setcolor(string color){
    this->color=color;
    }

    void breathes(){
        cout<<"it can breathe"<<endl;
    }
    void eats(){
        cout<<"it can eat"<<endl;
    }
    void display(){
        cout<<color<<endl;
    }
};
class fish : virtual public Animal{
public :
    int fins;

    void swims(){
        cout<<"can swim"<<endl;
    }

};
class Dog : virtual public Animal{
public :
    int walkspeed;

    void run(){
        cout<<"can run"<<endl;
    }
};
class Crocodile : public Dog, public fish{
public :
    int power;
};
int main(){
    Crocodile c;
    c.setcolor("green");
    c.display();
}