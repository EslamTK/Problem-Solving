#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,UnDis=0,Temp;
    scanf("%i",&n);
    long long Arr[n],Sum=0;
    for(int i=0;i<n;++i) scanf("%I64d",&Arr[i]);
    sort(Arr,Arr+n);
    bool Check;
    for(int i=0;i<n;++i)
    {
        if(Arr[i]>=Sum) ++UnDis;
        else
        {
            Check = 0;
            for(int j=i+1;j<n;++j)
            {
                if(Arr[j]>=Sum)
                {
                    ++UnDis;
                    Check = 1;
                    Temp = Arr[i];
                    Arr[i] = Arr[j];
                    Arr[j] = Temp;
                    break;
                }
            }
            if(!Check) break;
        }
        Sum += Arr[i];
    }
    printf("%i",UnDis);
    return 0;
}
