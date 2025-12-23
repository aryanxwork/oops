#include <iostream>
using namespace std;
class Recipient;
class Donor
{
    string donorname;
    double balance;

public:
    void setdetails(string name, double amount)
    {
        donorname = name;
        balance = amount;
    }
    void display()
    {
        cout << "Name - " << donorname << endl;
        cout << "Balance = " << balance << endl;
    }
    double getbalance()
    {
        return balance;
    }
    friend void transfer(Recipient &r, Donor &d, int amount);
};
class Recipient
{
    string recipientname;
    double accountbalance;
    double amountrequired;

public:
    void set(string name, double bal, double required)
    {
        recipientname = name;
        accountbalance = bal;
        amountrequired = required;
    }
    void displaydetails()
    {
        cout << "Name - " << recipientname << endl;
        cout << "Balance = " << accountbalance << endl;
    }
    double getbalance()
    {
        return accountbalance;
    }
    friend void transfer(Recipient &r, Donor &d, int amount);
};
void transfer(Recipient &r, Donor &d, int amount)
{
    if (amount > d.balance)
    {
        cout << "Insufficient balance in donor" << endl;
    }
    else
    {
        cout << "Before transaction : " << endl;
        cout << d.donorname << " balance = " << d.balance << endl;
        cout << r.recipientname << " balance = " << r.accountbalance << endl;
        cout << "Initializing Transaction" << endl;
        d.balance -= amount;
        r.accountbalance += amount;
        cout << "Transferred successfully!" << endl;
        cout << "Transaction details : " << endl;
        cout << d.donorname << "->" << r.recipientname << endl;
        cout << "Amount = " << amount << endl;
        cout << d.donorname << " balance = " << d.balance << endl;
        cout << r.recipientname << " balance = " << r.accountbalance << endl;
    }
}
int main()
{
    Donor d;
    d.setdetails("boss", 1000);
    Recipient r;
    r.set("slave", 100, 300);
    transfer(r, d, 300);
}