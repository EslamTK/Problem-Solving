#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int AbToNum(string x);
string NumToAb(int value);
int main()
{
    int Tests,s=0;
    string x,Temp;
    cin >> Tests;
    while(Tests--)
    {
        Temp = "";
        s = 0;
        cin >> x;
        while(x[s]>='A' && x[s]<='Z')
        {
            ++s;
        }
        while(x[s]>='0' && x[s]<='9')
        {
            ++s;
        }
        if(s==x.size())
        {
        s=0;
        while(x[s]>='A' && x[s]<='Z')
        {
            Temp += x[s];
            ++s;
        }
        cout << "R" << x.substr(s,(x.size()-s)) << "C" << AbToNum(Temp) << endl;
        }
        else
        {
         ++s;
         Temp = x.substr(s,(x.size()-s));
         cout << NumToAb(atoi(Temp.c_str())) << x.substr(1,--s-1) << endl;
        }
    }
    return 0;
}
string NumToAb(int value)
{
    string Text = "";
    while(--value>=0)
    {
    Text = char('A'+value%26) + Text;
    value /= 26;
    }
    return Text;
}
int AbToNum(string x)
{
    int r = 0;
    for(int i=0;i<x.size();++i)
    {
        r = (r*26) + (x[i]-64);
    }
    return r;
}
