#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n,X1,X2,X3,X4;
    scanf("%i",&n);
    int Numbers[n];
    for(int i=0;i<n;++i)
    {
        scanf("%i",&Numbers[i]);
    }
    for(int i=0;i+1<n;++i)
    {
    for(int j=0;j+1<n;++j)
    {
    if(i!=j)
    {
    if (Numbers[i]>Numbers[i+1])
    {
        X1 = Numbers[i+1];
        X2 = Numbers[i];
    }
    else
    {
        X1 = Numbers[i];
        X2 = Numbers[i+1];
    }
    if(Numbers[j]>Numbers[j+1])
    {
        X3 = Numbers[j+1];
        X4 = Numbers[j];
    }
    else
    {
        X3 = Numbers[j];
        X4 = Numbers[j+1];
    }
    if( X1<X3 && X3<X2 && X2<X4)
        {
           printf("yes");
           return 0;
        }
    else if( X3<X1 && X1<X4 && X4<X2)
        {
           printf("yes");
           return 0;
        }
    }
    }
    }
    printf("no");
    return 0;
}
