#include <iostream>
using namespace std;
int main()
{
    long long n,r=0;
    cin >> n;
    if(n%2!=0)
    {
        ++r;
        --n;
    }
    while(n>1)
    {
        if(n%2==0)
        {
            ++r;
            while(n%2==0) n /= 2;
        }
        else
        {
            --n;
        }
    }
    cout << r;
    return 0;
}
