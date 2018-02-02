#include <iostream>
#include <cmath>
#include <set>
using namespace std;
int main()
{
    set <long long> Divisors;
    set <long long>::iterator it;
    set <int> Digits;
    long long x,Temp,Res=0;
    cin >> x;
    for(long long i=1;i<=sqrt(x);++i)
    {
        if(!(x%i))
        {
            Divisors.insert(i);
            Divisors.insert(x/i);
        }
    }
    while(x)
    {
        Digits.insert(x%10);
        x /= 10;
    }
    for(it=Divisors.begin();it!=Divisors.end();++it)
    {
        Temp = *it;
        while(Temp)
        {
            if(Digits.find(Temp%10)!=Digits.end())
            {
                ++Res;
                break;
            }
        Temp /= 10;
        }
    }
    cout << Res;
    return 0;
}
