#include <stdio.h>
using namespace std;
int main()
{
    int nElement,mQuery,nOne=0,nMunis=0,R;
    scanf("%i",&nElement);
    scanf("%i",&mQuery);
    int Quer[mQuery][2];
    int Element[nElement];
    for(int i=0;i<nElement;i++)
    {
      scanf("%i",&Element[i]);
    }
    for(int i=0;i<mQuery;i++)
    {
        scanf("%i",&Quer[i][0]);
        scanf("%i",&Quer[i][1]);
    }
    for(int i=0;i<nElement;i++)
    {
        if(Element[i]==1)
        {
            ++nOne;
        }
        else
        {
            ++nMunis;
        }
    }
    for(int i=0;i<mQuery;i++)
    {
        R = Quer[i][1] - Quer[i][0] + 1;
        if(R/2>nOne || R/2>nMunis )
        {
        printf("0");
        }
        else if(R&1)
        {
         printf("0");
        }
        else
        {
         printf("1");
        }
        printf("\n");
    }
    return 0;
}
