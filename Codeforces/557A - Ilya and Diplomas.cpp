#include <iostream>
using namespace std;
int main()
{
    int n,Arr[3][2],Result[3];
    cin >> n;
    for(int i=0;i<3;++i)
    {
            cin >> Arr[i][0] >> Arr[i][1];
            Result[i] = Arr[i][0];
            n -= Arr[i][0];
    }
        for(int i=0;i<3;i++)
        {
            while(Result[i]<Arr[i][1])
            {
                if(n==0)
                {
                    break;
                }
                ++Result[i];
                --n;
            }
    }
    cout << Result[0] << " " << Result[1] << " " << Result[2];
    return 0;
}
