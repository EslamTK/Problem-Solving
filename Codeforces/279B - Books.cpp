#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    long long t,Sum=0;
    int n,l=0,MxLen=0,LeftIndex=0;
    scanf("%i %I64d",&n,&t);
    int Arr[n];
    for(int i=0;i<n;++i) scanf("%i",&Arr[i]);

    for(int i=0;i<n;++i)
    {
        Sum += Arr[i];
        ++l;
        while(Sum>t)
        {
            --l;
            Sum -= Arr[LeftIndex++];
        }
        if(l>MxLen) MxLen = l;;
    }
    printf("%i",MxLen);
    return 0;
}
