#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%i",&n);
    long long Arr[n];
    for(int i=0;i<n;++i)
    {
        scanf("%I64d",&Arr[i]);
        while( !(Arr[i]%3) || !(Arr[i]%2) )
        {
            if(!(Arr[i]%3)) Arr[i] /= 3;
            else Arr[i] /= 2;
        }
    }
    for(int i=1;i<n;++i)
    {
        if(Arr[0]!=Arr[i])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
