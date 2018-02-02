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
    if(Arr[0][0]==Arr[0][1])
    {
        cout << "NO";
        return 0;
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if( i==j || i+j==x-1 )
            {
                if(Arr[i][j]!=Arr[0][0])
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
               if(Arr[i][j]!=Arr[0][1])
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}
