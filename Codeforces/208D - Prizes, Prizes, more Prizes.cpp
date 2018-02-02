#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long Points[n];
    long long Prizes[5],Earned[5]={0},Left = 0,Value = 0;
    for(int i=0;i<n;++i) cin >> Points[i];
    cin >> Prizes[0] >> Prizes[1] >> Prizes[2] >> Prizes[3] >> Prizes[4];
    for(int i=0;i<n;++i)
    {
        Left += Points[i];
        for(int j=4;j>=0;--j)
        {
            if(Left>=Prizes[j])
            {
                Earned[j] += Left/Prizes[j];
                Left = Left%Prizes[j];
            }
        }
    }
    cout << Earned[0] << " " << Earned[1] << " " << Earned[2] << " " << Earned[3] << " " << Earned[4] << endl;
    cout << Left;
    return 0;
}
