#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
    string name;
    int ID;

public:
    Employee(string n, int id)
    {
        name = n;
        ID = id;
    }
    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
    }
};
class Manager : public Employee
{
    int teamSize;

public:
    Manager(string n, int id, int size) : Employee(n, id)
    {
        teamSize = size;
    }
    void display() override
    {
        Employee::display();
        cout << "Team Size: " << teamSize << endl;
    }
};
class Engineer : public Employee
{
    string specialization;

public:
    Engineer(string n, int id, string spec) : Employee(n, id)
    {
        specialization = spec;
    }
    void display() override
    {
        Employee::display();
        cout << "Specialization: " << specialization << endl;
    }
};
int main()
{
    Employee *emp1 = new Manager("Alice", 101, 5);
    Employee *emp2 = new Engineer("Bob", 102, "Software");

    cout << "Manager Details:" << endl;
    emp1->display();
    cout << endl;

    cout << "Engineer Details:" << endl;
    emp2->display();
    cout << endl;

    delete emp1;
    delete emp2;
    return 0;
}