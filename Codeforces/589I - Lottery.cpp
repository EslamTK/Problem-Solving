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
    int n,k,res=0,x;
    cin >> n >> k;
    int Arr[k];
    mset(Arr,0);
    forn(i,n)
    {
        cin >> x;
        ++Arr[x-1];
    }
    x = n/k;
    forn(i,k)
    {
        if(Arr[i]<x) res += x-Arr[i];
    }
    cout << res;
    return 0;
}
