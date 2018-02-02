#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    char Arr[x][x];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            cin >> Arr[i][j];
        }
    }
    int coun = 0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
           coun = 0;
           if(i-1>=0)
           {
               if(Arr[i-1][j]=='o')
               {
                   coun++;
               }
           }
           if(j-1>=0)
           {
               if(Arr[i][j-1]=='o')
               {
                   coun++;
               }
           }
           if(i+1<x)
           {
               if(Arr[i+1][j]=='o')
               {
                   coun++;
               }
           }
           if(j+1<x)
           {
               if(Arr[i][j+1]=='o')
               {
                   coun++;
               }
           }
        if(coun%2!=0)
        {
            cout << "NO";
            return 0;
        }
        }
    }
    cout << "YES";
    return 0;
}
