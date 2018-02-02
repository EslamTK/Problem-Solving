#include <iostream>
using namespace std;
bool IsRight(int x[][3]);
int main()
{
    int Arr[3][3];
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            cin >> Arr[i][j];
        }
    }
    for(int i=0;i<100000;++i)
    {
        ++Arr[0][0];
        Arr[1][1] = (Arr[0][0]+Arr[0][1]+Arr[0][2])-(Arr[1][0]+Arr[1][2]);
        Arr[2][2] = (Arr[0][0]+Arr[0][1]+Arr[0][2])-(Arr[2][0]+Arr[2][1]);

        if( Arr[1][1]>0 && Arr[2][2]>0 )
        {
        if(IsRight(Arr)) break;
        }
    }

    for(int i=0;i<3;++i)
    {
        for(int j=0;j<2;++j)
        {
            cout << Arr[i][j] << " ";
        }
        cout << Arr[i][2] << endl;
    }
    return 0;
}
bool IsRight(int x[][3])
{
     int v = (x[0][0]+x[0][1]+x[0][2]);
     if ( (x[1][0]+x[1][1]+x[1][2])==v && (x[2][0]+x[2][1]+x[2][2])==v &&
          (x[0][0]+x[1][0]+x[2][0])==v && (x[0][1]+x[1][1]+x[2][1])==v &&
          (x[0][2]+x[1][2]+x[2][2])==v && (x[0][0]+x[1][1]+x[2][2])==v &&
          (x[0][2]+x[1][1]+x[2][0])==v )
        {
        return true;
        }
        return false;
}
