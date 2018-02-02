#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long Met=0,Res=0;
    string x;
    cin >> x;
    for(int i=0;i+4<x.size();++i)
    {
        if(x.substr(i,5)=="metal") ++Met;
    }
    for(int i=0;i+4<x.size();++i)
    {
        if(x.substr(i,5)=="heavy") Res += Met;
        else if (x.substr(i,5)=="metal") --Met;
    }
    cout << Res;
    return 0;
}
