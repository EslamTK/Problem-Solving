#include <iostream>
using namespace std;
int main()
{
    int n,x,y,nOdd=0,SumX=0,SumY=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        SumX += x;
        SumY += y;
        if( (x%2!=0 && y%2==0) || (x%2==0 && y%2!=0) )
        {
            ++nOdd;
        }
    }
    if(SumX%2==0 && SumY%2==0)
    {
        cout << "0";
    }
    else if(SumX%2!=0 && SumY%2!=0 && nOdd>0)
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
