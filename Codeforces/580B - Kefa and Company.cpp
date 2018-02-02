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
    ll d,Mx = 0,Res = 0,Mx2 = 0;
    sf32(n),sf64(d);
    pair<ll,ll> Arr[n];
    forn(i,n) sf64(Arr[i].first),sf64(Arr[i].second);
    sort(Arr,Arr+n);
    for(int i=0,j=0;j<n;)
    {
        if(Arr[i].first+d>Arr[j].first)
        {
            Res += Arr[j].second;
            ++j;
        }
        else
        {
            Res -= Arr[i].second;
            ++i;
        }
        if(Res>Mx) Mx = Res;
    }
    pf("%I64d",Mx);
    return 0;
}
