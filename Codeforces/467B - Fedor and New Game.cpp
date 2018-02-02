#include <iostream>
using namespace std;
int BitsDifferent(int x,int y);
int main()
{
    int n,m,k,Differ,Friends=0;
    cin >> n >> m >> k;
    int Army[m+1];
    for(int i=0;i<=m;i++)
    {
        cin >> Army[i];
    }
    for(int i=0;i<m;i++)
    {
        Differ = BitsDifferent(Army[m],Army[i]);
        if (Differ<=k)
        {
            ++Friends;
        }
    }
    cout << Friends;
    return 0;
}
int BitsDifferent(int x,int y)
{
    int Dif = 0;
    while (x || y)
    {
        if( ((x&1) && !(y&1)) || (!(x&1) && (y&1)) )
        {
            ++Dif;
        }
        x >>= 1;
        y >>= 1;
    }
    return Dif;
}
