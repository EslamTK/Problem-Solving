#include <iostream>
using namespace std;
int LuckyCalc(string x);
int main()
{
    int n,k,Result=0;
    cin >> n >> k;
    string Number;
    while(n>0)
    {
        cin >> Number;
        if(LuckyCalc(Number)<=k)
        {
            ++Result;
        }
        --n;
    }
    cout << Result;
    return 0;
}
int LuckyCalc(string x)
{
    int nLuckyDigits = 0;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='4' || x[i]=='7')
        {
            ++nLuckyDigits;
        }
    }
    return nLuckyDigits;
}
