#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    long long n,l,Max=0;
    cin >> n >> l;
    long long lanterns[n];
    for(long long i=0;i<n;i++){ cin >> lanterns[i]; }
    sort(lanterns,lanterns+n);
    for(long long i=n-1;i>0;i--)
    {
        if((lanterns[i]-lanterns[i-1])>Max)
        {
            Max = lanterns[i]-lanterns[i-1];
        }
    }
    Max = max(Max,2*max(lanterns[0],l-lanterns[n-1]));
    cout << setprecision(10) << fixed << Max/2.0;
    return 0;
}
