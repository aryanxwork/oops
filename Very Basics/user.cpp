#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    int id;
    int password;

public:
    string username;

    User(int id)
    { // id will be created when object is created
        cout << "ID created" << endl;
        this->id = id;
    }
    User(User &original)
    { // custom copy constructor
        cout << "ID created" << endl;
        cout << "coping all details" << endl;
        id = original.id;
        password = original.password;
    }

    void setpass(int pass)
    { // pass for that id
        password = pass;
        cout << "Password added successfully" << endl;
    }

    void display()
    { // will display both
        cout << "ID - " << id << " " << "Password = " << password << endl;
    }
};
int main()
{
    User first(2110);
    first.setpass(1234);
    first.display();
    User third(first);
    third.display();
}