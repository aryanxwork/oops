#include <iostream>
using namespace std;
class Company
{
    string name;
    string location;

public:
    Company(string n, string loc)
    {
        name = n;
        location = loc;
    }
    void display()
    {
        cout << "Company Name: " << name << endl;
        cout << "Location: " << location << endl;
    }
};
class Team : public Company
{
    string teamname;
    string project;

public:
    Team(string n, string loc, string tname, string proj) : Company(n, loc)
    {
        teamname = tname;
        project = proj;
    }
    void display()
    {
        Company::display();
        cout << "Team Name: " << teamname << endl;
        cout << "Project: " << project << endl;
    }
};
class Developer : public Team
{
    string devname;
    string language;

public:
    Developer(string n, string loc, string tname, string proj, string dname, string lang) : Team(n, loc, tname, proj)
    {
        devname = dname;
        language = lang;
    }
    void display()
    {
        Team::display();
        cout << "Developer Name: " << devname << endl;
        cout << "Programming Language: " << language << endl;
    }
};
int main()
{
    Developer d("Google", "California", "Search Team", "Search Engine", "Alice", "C++");
    d.display();
    return 0;
}
