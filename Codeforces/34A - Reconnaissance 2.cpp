#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,Min;
    cin >> n;
    int Soliders[n];
    for(int i=0;i<n;i++)
    {
        cin >> Soliders[i];
    }
    Min = abs(Soliders[n-1]-Soliders[0]);
    int P1 = n,P2=1;
    for(int i=0;i+1<n;i++)
    {
        if(abs(Soliders[i+1]-Soliders[i])<Min)
        {
            Min = abs(Soliders[i+1]-Soliders[i]);
            P1 = i+1,P2=i+2;
        }
    }
    cout << P1 << " " << P2;
    return 0;
}
