#include <iostream>
using namespace std;
int main()
{
    int n,x,y,Start,End,Res=0,Arr[100]={0};
    cin >> n;
    cin >> Start >> End;
    --n;
    while(n--)
    {
        cin >> x >> y;
        for(int i=x;i<y;++i)
        {
            Arr[i] = 1;
        }
    }
    for(int i=Start;i<End;i++)
    {
        if(Arr[i]==0)
        {
            ++Res;
        }
    }
    cout << Res;
    return 0;
}
