#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long y,k,n,Temp=1,Sum=0;
    bool check = 0;
    cin >> y >> k >> n;
    if(y>=n)
    {
        cout << "-1";
        return 0;
    }
    while((k*Temp)<=y)
    {
        ++Temp;
    }
    for (;;)
    {
        Sum = k*Temp;
        if(Sum<=n)
        {
         cout << Sum-y << endl;
         check = 1;
        }
        else
        {
            break;
        }
        ++Temp;
    }
    if(!check)
    {
        cout << "-1";
    }
    return 0;
}
