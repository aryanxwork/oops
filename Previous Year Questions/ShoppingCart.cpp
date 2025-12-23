// You are provided with the ShoppingCart class, as shown above. Write the 
// main() function for the given class. Your task is to: 
// Take input from the user for the number of shopping carts (n) and 
// dynamically create an array of n ShoppingCart objects. Initialize the objects 
// using the parameterized constructor by taking the input at run-time. Display 
// the details.  
#include <iostream>
using namespace std;
class Shoppingcart
{
    int cartid;
    string customername;
    int itemcount;

public:
    Shoppingcart()
    {
        cartid = 0;
        customername = "name";
        itemcount = 0;
    }
    Shoppingcart(int id, string name, int count)
    {
        cartid = id;
        customername = name;
        itemcount = count;
    }
    ~Shoppingcart()
    {
        cout << "Thank You " << customername << endl;
    }
    void display()
    {
        cout << "ID- " << cartid << endl;
        cout << "Name- " << customername << endl;
        cout << "Number of items = " << itemcount << endl;
    }
};
int main()
{
    int n;
    cout << "enter number of shopping carts : ";
    cin >> n;
    Shoppingcart *ptr = new Shoppingcart[n];
    for (int i = 0; i < n; i++)
    {
        int id;
        int count;
        string name;
        cout << "enter name,id,count" << endl;
        cin >> name >> id >> count;
        ptr[i] = Shoppingcart(id, name, count);
    }
    for (int i = 0; i < n; i++)
    {
        ptr[i].display();
    }
    delete[] ptr;
    return 0;
}
