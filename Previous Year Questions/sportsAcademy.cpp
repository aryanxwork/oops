// A sports academy maintains the scores of players from Team A and Team B. Each team has 5 players, 
// and their scores are stored as a private integer array inside their respective classes. Write a C++ program 
// to define two classes TeamA and TeamB. 
// 1. Each class must contain: 
// o A private integer array of size 5 to store the scores. 
// o A member function setScores to input the scores from the user. 
// o A member function showScores to display the scores. 
// 2. Define a friend function swapScores that: 
// o Can access the private arrays of both classes 
// o Swaps the scores between TeamA and TeamB objects at the same index in the array. 
// 3. In the main function, create one object each of TeamA and TeamB.Enter scores for both teams. 
// Display their scores before swapping. Call the friend function swapScores().Display their scores 
// again after swapping. 
#include <iostream>
using namespace std;
class TeamB;
class TeamA
{
    int scores[5];

public:
    void setscores()
    {
        for (int i = 0; i < 5; i++)
        {
            int k;
            cout << "enter score " << i + 1 << " : ";
            cin >> k;
            scores[i] = k;
        }
    }
    void showscores()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << scores[i] << " ";
        }
    }
    friend void swapscores(TeamA &obj1, TeamB &obj2);
};
class TeamB
{
    int scores[5];

public:
    void setscores()
    {
        for (int i = 0; i < 5; i++)
        {
            int k;
            cout << "enter score " << i + 1 << " : ";
            cin >> k;
            scores[i] = k;
        }
    }
    void showscores()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << scores[i] << " ";
        }
    }
    friend void swapscores(TeamA &obj1, TeamB &obj2);
};
void swapscores(TeamA &obj1, TeamB &obj2)
{
    int temp[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        temp[i] = obj1.scores[i];
        obj1.scores[i] = obj2.scores[i];
        obj2.scores[i] = temp[i];
    }
}
int main()
{
    TeamA obj1;
    TeamB obj2;
    obj1.setscores();
    obj2.setscores();
    cout << "before swapping" << endl;
    cout << "team A = ";
    obj1.showscores();
    cout << endl;
    cout << "team B = ";
    obj2.showscores();
    cout << endl;
    cout << "after swapping" << endl;
    swapscores(obj1, obj2);
    cout << "team A = ";
    obj1.showscores();
    cout << endl;
    cout << "team B = ";
    obj2.showscores();
}
