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
ll n,m,Arr[11][3],Dp[1001][12][1002];
ll MaxIncome(int n,int index,int Count);
int main()
{
    ll a,b,c,d,Max=0;
    cin >> n >> m >> c >> d;
    ++m;
    Arr[0][0] = 1002,Arr[0][1] = c,Arr[0][2] = d;
    for(int i=1;i<m;++i)
    {
        cin >> a >> b >> c >> d;
        Arr[i][0] = a/b,Arr[i][1] = c,Arr[i][2] = d;
    }
    mset(Dp,-1);
    cout << MaxIncome(n,0,0);
    return 0;
}
ll MaxIncome(int n,int index,int Count)
{
    if(n<=0 || index>=m) return 0;
    if(Dp[n][index][Count]!=-1) return Dp[n][index][Count];
    ll res = 0;
    if(Arr[index][0]>Count && n>=Arr[index][1])
    {
    res = max(Arr[index][2] + MaxIncome(n-Arr[index][1],index,Count+1),MaxIncome(n,index+1,0));
    }
    else res = MaxIncome(n,index+1,0);
    return Dp[n][index][Count] = res;
}
