#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <int> xSize;
    set <int> ySize;
    int n,x,y;
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        xSize.insert(x);
        ySize.insert(y);
    }
    if(xSize.size()<ySize.size())
    {
        cout << xSize.size();
    }
    else
    {
        cout << ySize.size();
    }
    return 0;
}
