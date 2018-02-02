#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,Temp;
    long long Min = 0;
    cin >> n >> d;
    int Arr[n];
    for(int i=0;i<n;++i)
    {
        cin >> Arr[i];
    }
    for(int i=1;i<n;++i)
    {
        if(Arr[i]<=Arr[i-1])
        {
            Temp =  ceil(double(Arr[i-1]-Arr[i]+1)/d);
            Min += Temp;
            Arr[i] += Temp*d;
        }
    }
    cout << Min;
    return 0;
}
