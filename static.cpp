#include <iostream>
using namespace std;
void counter()
{
    static int count = 0; // by using static keyword, this lines executes only once and value of count increases
    count++;              // if we don't use static keyword, count will always get initialised by 0 and output will be always 1
    cout << "count = " << count << endl;
}
int main()
{
    counter();
    counter();
    counter();
    counter();
}