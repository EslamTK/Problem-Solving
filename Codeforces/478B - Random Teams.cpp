#include <iostream>
using namespace std;
long long Equ(long long x);
int main()
{
    long long n,m,Max,Min;
    cin >> n >> m;
    Max = Equ(n-(m-1));
    Min = ((m-n%m)*Equ(n/m))+((n%m)*Equ(n/m+1));
    cout << Min << " " << Max;
    return 0;
}
long long Equ(long long x)
{
    return (x*(x-1))/2;
}
