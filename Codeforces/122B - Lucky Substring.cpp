#include <iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int n4=0,n7=0;
    for(int i=0;i<x.size();++i)
    {
        if(x[i]=='4') ++n4;
        else if(x[i]=='7') ++n7;
    }
    if(n7==0 && n4==0) cout << "-1";
    else if(n4>=n7) cout << "4";
    else cout << "7";
    return 0;
}
