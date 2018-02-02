#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long Arr[n],Res = 0;
    for(int i=0;i<n;++i) cin >> Arr[i];
    sort(Arr,Arr+n);
    for(int i=0;i<n;++i)
    {
        if(Arr[i]!=i+1)
        {
            if(Arr[i]<i+1) Res += (i+1) - Arr[i];
            else Res += Arr[i]-(i+1);
        }
    }
    cout << Res;
    return 0;
}
