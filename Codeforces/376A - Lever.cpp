#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x,P1,P2;
    getline(cin,P1,'^');
    cin >> P2;
    long long P1Size=0,P2Size=0,Siz= P1.size();
    for(int i=0;i<Siz;i++)
    {
        if(P1[i]!='=')
        {
        P1Size += ((P1[i]-'0')*(Siz-i));
        }
    }
     Siz= P2.size();
     for(int i=0;i<Siz;i++)
    {
        if(P2[i]!='=')
        {
        P2Size += ((P2[i]-'0')*(i+1));
        }
    }
    if(P1Size > P2Size)
    {
        cout << "left";
    }
    else if (P2Size > P1Size)
    {
        cout << "right";
    }
    else
    {
        cout << "balance";
    }
    return 0;
}
