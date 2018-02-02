#include <iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    char Temp;
    bool Check = 0,Check1 = 0;
    for(int i=0;i<x.size();++i)
    {
        if((x[i]-'0')%2==0)
        {
            Check1 = 1;
            if((x[i]-'0')<(x[x.size()-1]-'0'))
            {
            Temp = x[i];
            x[i] = x[x.size()-1];
            x[x.size()-1] = Temp;
            Check = 1;
            break;
            }
        }
    }
    if(!Check1)
    {
        cout << "-1";
    }
    else if(Check)
    {
    cout << x;
    }
    else
    {
     for(int i=x.size()-1;i>=0;--i)
    {
        if((x[i]-'0')%2==0)
        {
        Temp = x[i];
        x[i] = x[x.size()-1];
        x[x.size()-1] = Temp;
        break;
        }
    }
    cout << x;
    }
    return 0;
}
