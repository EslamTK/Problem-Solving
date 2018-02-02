#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int Arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> Arr[i][j];
        }
    }
    for(int i=0;i<n;i+=n-1)
    {
        for(int j=0;j<m;j++)
        {
            if(Arr[i][j]==1)
            {
                cout << "2";
                return 0;
            }
        }
    }
    for(int j=0;j<m;j+=m-1)
    {
    for(int i=0;i<n;i++)
    {
        if(Arr[i][j]==1)
        {
            cout << "2";
            return 0;
        }
    }
    }
    cout << "4";
    return 0;
}
