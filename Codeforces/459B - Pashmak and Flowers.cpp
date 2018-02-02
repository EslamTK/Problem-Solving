#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long nFlowers,Max,nSmall=0,nBig=0;
    cin >> nFlowers;
    long long Flowers[nFlowers];
    for(int i=0;i<nFlowers;i++){cin >> Flowers[i];}
    sort(Flowers,Flowers+nFlowers);
    Max = Flowers[nFlowers-1] - Flowers[0];
    if(Max==0)
    {
        cout << "0 " << (nFlowers*(nFlowers-1))/2;
        return 0;
    }
    for(int i=0;Flowers[i]==Flowers[0];i++)
    {
    ++nSmall;
    }
    for(int i=nFlowers-1;Flowers[i]==Flowers[nFlowers-1];i--)
    {
    ++nBig;
    }
    cout << Max << " " << nBig*nSmall;
    return 0;
}
