#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool IsRight(int x1,int y1,int x2,int y2,int x3,int y3);
int main()
{
    int Points[6];
    cin >> Points[0] >> Points[1] >> Points[2] >> Points[3] >> Points[4] >> Points[5];
    if(IsRight(Points[0],Points[1],Points[2],Points[3],Points[4],Points[5]))
    {
        cout << "RIGHT";
        return 0;
    }
    else
    {
    int dx[]={-1,0,1,0}, dy[]={0,1,0,-1};
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<4;j++)
    {
    if(i==0)
    {
    if(IsRight(Points[0]+dx[j],Points[1]+dy[j],Points[2],Points[3],Points[4],Points[5]))
    {
            cout << "ALMOST";
            return 0;
    }
    }
    else if(i==1)
    {
    if(IsRight(Points[0],Points[1],Points[2]+dx[j],Points[3]+dy[j],Points[4],Points[5]))
    {
            cout << "ALMOST";
            return 0;
    }
    }
    else if(i==2)
    {
    if(IsRight(Points[0],Points[1],Points[2],Points[3],Points[4]+dx[j],Points[5]+dy[j]))
    {
            cout << "ALMOST";
            return 0;
    }
    }
    }
    }
    }
    cout << "NEITHER";
    return 0;
}
bool IsRight(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int Arr[3];
    Arr[0] = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    Arr[1] = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
    Arr[2] = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);

    sort(Arr,Arr+3);

    if( Arr[0]>0 && Arr[2]==Arr[0]+Arr[1] )
        return true;
    else
        return false;
}
