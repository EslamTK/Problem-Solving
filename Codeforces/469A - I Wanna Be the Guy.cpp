#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <int> PassedLevels;
    int NumberOfLevels,Playerlevels,Level;
    cin >> NumberOfLevels;
    for(int j=0;j<2;j++)
    {
    cin >> Playerlevels;
    for(int i=0;i<Playerlevels;i++)
    {
        cin >> Level;
        PassedLevels.insert(Level);
    }
    }
    for(int i=1;i<=NumberOfLevels;i++)
    {
        if(PassedLevels.find(i)==PassedLevels.end())
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}
