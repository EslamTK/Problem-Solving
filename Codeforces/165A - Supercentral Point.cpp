#include <iostream>
using namespace std;
int main()
{
    int n,Total=0,Lower,Upper,Right,Left;
    cin >> n;
    int Points[n][2];
    for(int i=0;i<n;i++)
    {
        cin >> Points[i][0] >> Points[i][1];
    }
    for(int i=0;i<n;i++)
    {
    Lower=0,Upper=0,Right=0,Left=0;
    for(int j=0;j<n;j++)
    {
        if (Points[i][0]==Points[j][0] && Points[j][1]<Points[i][1])
        {
            ++Lower;
        }
        else if (Points[i][0]==Points[j][0] && Points[j][1]>Points[i][1])
        {
            ++Upper;
        }
        else if (Points[i][1]==Points[j][1] && Points[j][0]>Points[i][0])
        {
            ++Right;
        }
        else if (Points[i][1]==Points[j][1] && Points[j][0]<Points[i][0])
        {
            ++Left;
        }
    }
    if(Lower>=1 && Upper>=1 && Right>=1 && Left>=1)
    {
        ++Total;
    }
    }
    cout << Total;
    return 0;
}
