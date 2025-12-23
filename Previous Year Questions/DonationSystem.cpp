// Develop a Donation Management System in C++ that efficiently manages 
// the transfer of donations between accounts utilizing classes. The system 
// consists of the following components: Donor Class contains private data 
// members: string donor_name, double balance. Write the following 
// functions in public section: 
//  set_details(string name, double amount) 
//  display() 
//  double get_balance() 
// Recipient Class contains the private data member: string recipient_name, 
// double account_balance, double amount_required needed by the recipient 
// and the following functions in public section: 
//  set_details(string name, double balance, double amount) 
//  display() 
//   
// 5 
// CO2 L4 
// double get_balance()  
// Additionally, the program includes the following function: 
// transfer (Donor &donor, Recipient &recipient, double 
// amount) 
// This function facilitates the transfer of funds between a donor and a 
// recipient. This function will verify whether the donor has sufficient funds 
// for the transfer. If the donor has adequate funds, both the donor's and 
// recipient's balances will be updated accordingly. Complete the program 
// using the above-mentioned conditions. 
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
