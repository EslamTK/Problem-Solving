#include <iostream>
using namespace std;
int main()
{
    string x,y,xDif="",yDif="";
    cin >> x >> y;
    if(x.size()!=y.size())
    {
        cout << "NO";
        return 0;
    }
    for(int i=0;i<x.size();i++)
    {
        if(x[i]!=y[i])
        {
            xDif += x[i];
            yDif += y[i];
            if(xDif.size()>2)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    if( (xDif[1]==yDif[0] && xDif[0]==yDif[1]) || (xDif[0]==yDif[0] && xDif[1]==yDif[1]))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
