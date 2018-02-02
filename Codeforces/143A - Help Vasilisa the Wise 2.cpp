#include <iostream>
using namespace std;
int main()
{
    int Req[6],Key[4],Min=0;
    bool check = 1;
    for (int i=0;i<6;i++)
    {
        cin >> Req[i];
    }
    Min = min(Req[0],min(Req[2],Req[4]));
    for(int l=1;l<Min;l++)
    {
    check = 1;
    Key[0] = l;
    Key[1] = Req[0]-Key[0];
    Key[2] = Req[2]-Key[0];
    Key[3] = Req[4]-Key[0];
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(Key[i]==Key[j] || Key[j]<1 || Key[j]>9)
            {
                check=0;
                break;
            }
        }
    }
        if(check)
        {
        if( Key[0]+Key[1]==Req[0] && Key[0]+Key[2]==Req[2] && Key[0]+Key[3]==Req[4] &&
            Key[2]+Key[3]==Req[1] && Key[1]+Key[3]==Req[3] && Key[1]+Key[2]==Req[5] )
        {
        cout << Key[0] << " " << Key[1] << "\n" << Key[2] << " " << Key[3];
        return 0;
        }
        }
    }
    cout << "-1";
    return 0;
}
