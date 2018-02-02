#include <iostream>
using namespace std;
int main()
{
    long long n,k,f,t,joy,Max=0;
    cin >> n >> k;
    cin >> f >> t;
    if(t>k)
    {
    joy = f-(t-k);
    }
    else
    {
    joy = f;
    }
    Max = joy;
    while(n>1)
    {
        cin >> f >> t;
        if(t>k)
        {
            joy = f-(t-k);
        }
        else
        {
            joy = f;
        }
        if(joy>Max)
        {
            Max = joy;
        }
        --n;
    }
    cout << Max;
    return 0;
}
