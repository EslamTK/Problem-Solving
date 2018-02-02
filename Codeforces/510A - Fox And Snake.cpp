#include <iostream>
using namespace std;
int main()
{
    int x,y;
    bool check = 1;
    cin >> x >> y;
    for(int i=0;i<y;i++)
    {
    cout << "#";
    }
    cout << endl;
    while (x>1)
    {
    if(check)
    {
    for(int i=1;i<y;i++)
    {
        cout << ".";
    }
    cout << "#" << endl;
    check = 0;
    }
    else
    {
    cout << "#";
    for(int i=1;i<y;i++)
    {
        cout << ".";
    }
    cout << endl;
    check = 1;
    }
    for(int i=0;i<y;i++)
    {
        cout << "#";
    }
    cout << endl;
    x -= 2;
    }
    return 0;
}
