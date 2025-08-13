#include <iostream>
using namespace std;

class Example
{
public:
    Example()
    {
        cout << "constructor" << endl;
    }
    ~Example()
    {
        cout << "destructor" << endl;
    }
};
int main()
{
    int a = 0;
    if (a == 0)            // if we don't use static keyword, object will be created,constructor will be called,object will be deleted,
    {                      // destructor will be called and then program will end by printing code end
        static Example e1; // by using static, object will be deleted after the termination of program
    }
    cout << "code end" << endl;
}