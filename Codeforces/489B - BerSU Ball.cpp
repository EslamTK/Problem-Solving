#include <bits/stdc++.h>
#define pf printf
#define sf32(x) scanf("%i",&x)
#define sf64(x) scanf("%I64d",&x);
#define pb push_back
#define mpr make_pair
#define mset(a,x) memset(a,x,sizeof(a))
#define forn(n) for (int i=0;i<n;++i)
#define form(m) for (int j=0;j<m;++j)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
typedef long long ll;
using namespace std;
int main()
{
    int n,m,nPairs=0;
    cin >>  n;
    int Boys[n];
    forn(n) cin >> Boys[i];
    cin >> m;
    int Girls[m];
    forn(m) cin >> Girls[i];
    sort(Boys,Boys+n);
    sort(Girls,Girls+m);
    forn(n)
    {
        form(m)
        {
           if(abs(Boys[i]-Girls[j])<2 && Girls[j]!=-1)
           {
               ++nPairs;
               Girls[j] = -1;
               break;
           }
        }
    }
    cout << nPairs;
    return 0;
}
