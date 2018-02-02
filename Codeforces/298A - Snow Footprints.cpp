#include <iostream>
using namespace std;
int main()
{
    int n,S,T;
    cin >> n;
    string x;
    cin >> x;
    char Schar;
    for(int i=0;i<n;i++)
    {
        if(x[i]!='.')
        {
            Schar = x[i];
            S = i;
            break;
        }
    }
    if(Schar=='R')
    {
    for(int i=S;i<n;i++)
    {
        if(x[i]!='R')
        {
            T = i;
            break;
        }
    }
    cout << S+1 << " " << T+1;
    }
    else
    {
    for(int i=S;i<n;i++)
    {
        if(x[i]!='L')
        {
            T = i;
            break;
        }
    }
    cout << T << " " << S;
    }
    return 0;
}
