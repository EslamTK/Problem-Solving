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
int n1,n2,k1,k2;
ll Dp[101][101][11][11];
ll Count(int a,int b,int nA,int nB);
int main()
{
    cin >> n1 >> n2 >> k1 >> k2;
    mset(Dp,-1);
    cout << Count(0,0,0,0);
    return 0;
}
ll Count(int a,int b,int nA,int nB)
{
    if(a>k1 || b>k2 || nA>n1 || nB>n2) return 0;
    if(nA==n1 && nB==n2) return 1;
    if(Dp[nA][nB][a][b]!=-1) return Dp[nA][nB][a][b];
    ll res = Count(a+1,0,nA+1,nB) + Count(0,b+1,nA,nB+1);
    if(res>=100000000) res -= 100000000;
    Dp[nA][nB][a][b] = res;
    return res;
}
