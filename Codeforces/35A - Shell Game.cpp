#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,x,y;
    cin >> n;
    for(int i=0;i<3;++i)
    {
        cin >> x >> y;
        if(x==n)
        {
            n = y;
        }
        else if(y==n)
        {
            n = x;
        }
    }
    cout << n;
    return 0;
}
