#include <iostream>
using namespace std;
int main()
{
    long long x,i,Sum=0,nD=1;
    long long N[] = {0,9,99,999,9999,99999,999999,9999999,99999999,999999999};
    cin >> x;
    for(i=10;;i*=10)
    {
        if(x>i)
        {
             Sum += nD*((i-1)-N[nD-1]);
        }
        else if(x==i)
        {
             Sum += nD*(x-N[nD-1])+1;
             cout << Sum;
             return 0;
        }
        else
        {
             Sum += nD*(x-N[nD-1]);
             cout << Sum;
             return 0;
        }
        ++nD;
    }
    return 0;
}
