#include <iostream>
using namespace std;
int main()
{
short nSoldiers,max=0,mini,cmini=0,cmax=0,x=0;
cin >> nSoldiers;
short sHeights[nSoldiers];
for (short i=0;i<nSoldiers;i++)
{
    cin >> sHeights[i];
    if (i==0)
    {
    mini = sHeights[i];
    }
    if (sHeights[i]>max)
    {
        max = sHeights[i];
    }
    if (sHeights[i]<mini)
    {
        mini = sHeights[i];
    }
}
while (sHeights[x]!=max)
{
    cmax++;
    x++;
}
x = nSoldiers-1;
while (sHeights[x]!=mini)
{
    if (x!=cmax)
    {
    cmini++;
    }
    x--;
}
cout << cmax+cmini;
    return 0;
}
