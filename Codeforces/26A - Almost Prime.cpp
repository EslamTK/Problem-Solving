#include <iostream>
#include <cmath>
using namespace std;
bool IsNearly(int n);
int main()
{
    int n,r=0;
    cin >> n;
    for(int i=2;i<=n;++i) if(IsNearly(i)) ++r;

    cout << r;
    return 0;
}
bool IsNearly(int n)
{
    int D = 0;
    if(n%2==0)
    {
        ++D;
        while(n%2==0) n /= 2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
        {
        ++D;
        while(n%i==0) n /= i;
        }
    }
    if(n!=1) ++D;
    if(D==2) return 1;
    return 0;
}
