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
ll Combinations(ll N,ll R);
int main()
{
    ll n,m,t,res=0;
    cin >> n >> m >> t;
    for(int i=4;i<=n;++i)
    {
        if(t-i<=m && t-i>0)
        {
            res += Combinations(n,i) * Combinations(m,t-i);
        }
    }
    cout << res;
    return 0;
}
ll Combinations(ll N,ll R)
{
    if (R < 0 || R > N) return 0;

    ll Comb = 1,i = 0;

    while (i < R)
    {
        ++i;
        Comb *= N - i + 1;
        Comb /= i;
    }
    return Comb;
}
