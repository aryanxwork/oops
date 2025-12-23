#include<iostream>
#include<string>
using namespace std;
class Student{ // student is now a user defined datatype
public:
    string name; //attributes of every object inside student class
    float cgpa;
// member functions
    void adddetails(){
        cout<<"enter name : ";
        getline(cin,name);
        cout<<"enter cgpa : ";
        cin>>cgpa;    
    }

     void display(){
        cout<<name<<endl;
        cout<<cgpa<<endl;
    }

};
int main(){
    Student s1;
    s1.adddetails();
    s1.display();
}
