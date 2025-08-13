#include<iostream>
#include<string>
using namespace std;

class Student{
public :     
    string name;
    float cgpa;
// getters and setters
    void setname(string enteredname){
        name=enteredname;
    }
    void setcg(float cg){
        cgpa=cg;
    }
    void getname(){
        cout<<name<<endl;
    }
    void getcg(){
        cout<<cgpa<<endl;
    }
};
int main(){
    Student s1;
    s1.setcg(9.9);
    s1.setname("Pappu");

    s1.getcg();
    s1.getname();
}

