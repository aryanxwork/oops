// A school wants to maintain basic details about students and also keep track of the total number of 
// students created as objects. Write a C++ program to create a class Student with: 
// 1. Data members: 
// o string name or char name[50] 
// o int rollNo 
// 2. Static data member: 
// o static int count; 
// (to track the total number of Student objects created) 
// 3. Member functions: 
// o A parameterized constructor that: 
//  Initializes name and rollNo using this pointer 
//  Increments count 
// o An inline member function showDetails() that: 
//  Prints the student's name and roll number 
// o A static member function getCount() that: 
//  Returns the value of count 
// 4. In main function, create at least 3 Student objects. Call showDetails() for each object to display 
// their information. Finally, display the total number of students created using the getCount() static 
// function. 
#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int rollno;
    static int count;

public:
    Student(string name, int n)
    {
        this->name = name;
        this->rollno = n;
        count++;
    }
    inline void showdetails()
    {
        cout << name << " " << rollno << endl;
    }
    static int getcount()
    {
        return count;
    }
};
int Student::count = 0;
int main()
{
    Student s1("ARYAN", 1);
    Student s2("PAPPU", 2);
    Student s3("hoot", 3);
    s1.showdetails();
    s2.showdetails();
    s3.showdetails();
    cout << Student::getcount();
}
