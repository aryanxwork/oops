// A company wants to track the employee ID numbers of several temporary workers. Since the number of 
// workers is decided at runtime, and their IDs are dynamically assigned, write a C++ program with the 
// following requirements: 
// i. Define a class Employee that stores the employee ID using an integer pointer (int* empID) in 
// private scope. 
// ii. The class must: 
// a. Have a default constructor that dynamically allocates memory and stores a given 
// employee ID (input by the user using cin). 
// b. Have a destructor that frees the allocated memory. 
// c. Have a display() function to print the employee ID. 
// iii. In the main() function: 
// a. Dynamically create a pointer to an array of Employee objects using new. 
// b. Display all the employee IDs. 
#include <iostream>
using namespace std;
class Employee
{
    int *empID;

public:
    Employee()
    {
        int id;
        cout << "enter ID : ";
        cin >> id;
        empID = new int;
        *empID = id;
    }
    ~Employee()
    {
        delete empID;
    }
    void display()
    {
        cout << "ID = " << *empID << endl;
    }
};
int main()
{
    int n;
    cout << "Enter total number of employees : ";
    cin >> n;
    Employee *ptr = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        ptr[i].display();
    }
    delete[] ptr;
}
