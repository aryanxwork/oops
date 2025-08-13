#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public : // creating constructor without parameter
    Car(){
        cout<< "constructor is called without parameters"<<endl;
    }
    // parametrised constructor called with initialising name and color
    Car(string name,string color){
        cout<<"constructor with parameters is called"<<endl;
        cout<<"name and color initialized"<<endl;
        this->name=name; // this pointer initialises properties
        this->color=color;   // this pointer initialises properties
    }
    ~Car(){
        cout<<"destructor called"<<endl;
    }
    void speed(){
        cout<<"car is speeding"<<endl; // normal member fuctions
    }
    void stop(){
        cout<<"car has stopped"<<endl; // normal member fuctions
    }
    void getdetails(){
        cout<<name<<endl;
        cout<<color<<endl;
    }
};
int main(){
    Car c0; // constructor without parameters is called
    Car c1("scorpio","black"); // parameterised constructor called and properties initialised
    c1.getdetails(); // display
    c1.speed();
    c1.stop();
}