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
    int n,Tot = 0;
    cin >> n;
    int Arr[n][2];
    forn(i,n) cin >> Arr[i][0] >> Arr[i][1];

    int Min = Arr[0][1];
    forn(i,n)
    {
        if(Arr[i][1]<Min) Min = Arr[i][1];
        Tot += (Arr[i][0] * Min);
    }
    cout << Tot;
    return 0;
}
