#include <iostream>
using namespace std;
int main()
{
    char Arr[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> Arr[i][j];
        }
    }
    int Black = 0,White = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            Black = 0,White = 0;
            if(Arr[i][j]=='#')
            {
                Black++;
            }
            else
            {
                White++;
            }
            if(Arr[i][j+1]=='#')
            {
                Black++;
            }
            else
            {
                White++;
            }
            if(Arr[i+1][j]=='#')
            {
                Black++;
            }
            else
            {
                White++;
            }
            if(Arr[i+1][j+1]=='#')
            {
                Black++;
            }
            else
            {
                White++;
            }
            if(Black==4 || Black==3 || White==3 || White==4)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
