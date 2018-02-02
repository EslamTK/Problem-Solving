#include <iostream>
using namespace std;
int main()
{
    int rows,colums;
    cin >> rows >> colums;
    char Arr[rows][colums];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<colums;j++)
        {
            cin >> Arr[i][j];
        }
    }
    int nRow=0,nColum=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<colums;j++)
        {
            if(Arr[i][j]=='S')
            {
                nColum++;
                break;
            }
        }
    }
    for(int i=0;i<colums;i++)
    {
        for(int j=0;j<rows;j++)
        {
            if(Arr[j][i]=='S')
            {
                nRow++;
                break;
            }
        }
    }
    cout << (rows*colums)-(nRow*nColum);
    return 0;
}