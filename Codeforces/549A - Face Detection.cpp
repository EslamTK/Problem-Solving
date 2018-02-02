#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    char Arr[n][m];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> Arr[i][j];
        }
    }
    int Coun = 0;
    string F = "";
    for (int i=0;i+1<n;i++)
    {
        for(int j=0;j+1<m;j++)
        {
            F = Arr[i][j];
            F += Arr[i][j+1];
            F += Arr[i+1][j];
            F += Arr[i+1][j+1];
            if (F.find('f')!=-1 && F.find('a')!=-1 && F.find('c')!=-1 && F.find('e')!=-1)
            {
                ++Coun;
            }
        }
    }
    cout << Coun;

    return 0;
}
