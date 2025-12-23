#include <iostream>
#include <string>
using namespace std;
class Payment
{
protected:
    double amount;

public:
    Payment(double amt)
    {
        amount = amt;
    }
    virtual void processPayment() = 0; // pure virtual function
};
class CreditCardPayment : public Payment
{
    int cardNumber;

public:
    CreditCardPayment(double amt, int cardNo) : Payment(amt)
    {
        cardNumber = cardNo;
    }
    void processPayment() override
    {
        cout << "Processing credit card payment of $" << amount << " for card number " << cardNumber << endl;
    }
};
class PayPalPayment : public Payment
{
    string email;

public:
    PayPalPayment(double amt, string mail) : Payment(amt)
    {
        email = mail;
    }
    void processPayment() override
    {
        cout << "Processing PayPal payment of $" << amount << " for email " << email << endl;
    }
};
class CashPayment : public Payment
{
public:
    CashPayment(double amt) : Payment(amt)
    {
    }
    void processPayment() override
    {
        cout << "Processing cash payment of $" << amount << endl;
    }
};
int main()
{
    Payment *p1 = new CreditCardPayment(100.50, 123456789);
    Payment *p2 = new PayPalPayment(75.25, "user@example.com");
    Payment *p3 = new CashPayment(50.00);

    p1->processPayment();
    p2->processPayment();
    p3->processPayment();

    delete p1;
    delete p2;
    delete p3;

    return 0;
}