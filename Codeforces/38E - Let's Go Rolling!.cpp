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
int n;
ll Dp[3001][3001];
pair<int,int> Arr[3001];
ll MinCost(short index,short pin);
int main()
{
    cin >> n;
    forn(i,n) cin >> Arr[i].first >> Arr[i].second;
    sort(Arr,Arr+n);
    mset(Dp,-1);
    cout << Arr[0].second+MinCost(1,0);
    return 0;
}
ll MinCost(short index,short pin)
{
    if(index>=n) return 0;
    if(Dp[index][pin]!=-1) return Dp[index][pin];
    return Dp[index][pin] = min(Arr[index].second+MinCost(index+1,index),abs(Arr[index].first-Arr[pin].first)+MinCost(index+1,pin));
}
