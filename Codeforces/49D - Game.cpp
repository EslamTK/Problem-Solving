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
    int n,m = 0,k = 0,c=0;
    string x;
    cin >> n >> x;
    for(int i=0;i<n;++i)
    {
        if(x[i]-'0'==c) ++m;
        else ++k;
        c = 1 - c;
    }
    cout << min(m,k);
    return 0;
}
