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
ll k=0,n=0,d=0;
ll Dp[101][2];
ll Count(ll Total,int Contain);
int main()
{
    cin >> n >> k >> d;
    mset(Dp,-1);
    cout << Count(0,0) << endl;
    return 0;
}
ll Count(ll Total,int Contain)
{
  if(Total>n) return 0;
  if(Total==n) return Contain;
  if(Dp[Total][Contain]!=-1) return Dp[Total][Contain];
  ll res = 0;
  for(int i=1;i<=k;++i)
  {
      if(i>=d) res += Count(Total + i,1);
      else res += Count(Total + i,Contain);
  }
  if(res > 1000000006) res %= 1000000007;
  Dp[Total][Contain] = res;
  return res;
}
