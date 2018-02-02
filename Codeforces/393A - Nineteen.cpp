#include <iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int n=0,e=0,I=0,t=0,coun=0;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='n')
        {
            ++n;
        }
        else if(x[i]=='e')
        {
            ++e;
        }
        else if(x[i]=='t')
        {
            ++t;
        }
        else if(x[i]=='i')
        {
            ++I;
        }
    }
    while( (n>=3 && e>=3 && I>=1 && t>=1) || (n>=2 && e>=3 && I>=1 && t>=1 && coun>0) )
    {
        if(coun==0)
        {
        n -= 3;
        }
        else
        {
        n -= 2;
        }
        e -= 3;
        --I;
        --t;
        ++coun;
    }
    cout << coun;
    return 0;
}
