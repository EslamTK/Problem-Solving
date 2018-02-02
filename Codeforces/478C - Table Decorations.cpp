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
ll Calc(ll a, ll b);
int main()
{
    ll Arr[3];
    cin >> Arr[0] >> Arr[1] >> Arr[2];
    sort(Arr,Arr+3);
    if(Arr[2]>=2*(Arr[0]+Arr[1])) cout << Arr[0]+Arr[1];
    else cout << (Arr[0]+Arr[1]+Arr[2])/3;
    return 0;
}
