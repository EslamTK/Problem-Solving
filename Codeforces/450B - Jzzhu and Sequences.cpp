#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long x,y,n;
    cin >> x >> y >> n;
    x = (1000000007+x)%1000000007;
    y = (1000000007+y)%1000000007;
    long long Arr[6];
    Arr[0] = x,Arr[1] = y;
    for(long long i=1;i+1<6;++i)
    {
        Arr[i+1] = Arr[i] - Arr[i-1];
        Arr[i+1] = (1000000007+Arr[i+1])%1000000007;
    }
    n %= 6;
    if(n==0)
    {
        cout << Arr[5];
    }
    else
    {
        cout << Arr[n-1];
    }
    return 0;
}
