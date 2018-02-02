#include <bits/stdc++.h>
#define pf printf
#define pb push_back
#define mpr make_pair
#define sf32(x) scanf("%i",&x)
#define all(v) v.begin(),v.end()
#define sf64(x) scanf("%I64d",&x)
#define rall(v) v.rbegin(),v.rend()
#define forn(i,n) for(int i=0;i<n;++i)
#define mset(a,x) memset(a,x,sizeof(a))
#define forc(it,x) for(it=x.begin();it!=x.end();++it)
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Arr[n];
    forn(i,n) cin >> Arr[i];
    int mFl = -1;
    for(int i=n-1;i>=0;--i)
    {
        if(Arr[i]>mFl)
        {
        mFl = Arr[i];
        Arr[i] = 0;
        }
        else Arr[i] = (mFl+1) - Arr[i];
    }
    forn(i,n) cout << Arr[i] << " ";
    return 0;
}
