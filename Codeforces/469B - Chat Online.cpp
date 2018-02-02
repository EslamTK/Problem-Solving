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
    int p,q,l,r,A,B,C,D,total = 0;
    cin >> p >> q >> l >> r;
    int Z[p][2],X[q][2];
    forn(i,p) cin >> Z[i][0] >> Z[i][1];
    forn(i,q) cin >> X[i][0] >> X[i][1];

    for(int i=l;i<=r;++i)
    {
        forn(j,q)
        {
            bool Check = false;
            C = X[j][0] + i;
            D = X[j][1] + i;
            forn(k,p)
            {
                A = Z[k][0];
                B = Z[k][1];
                if(A==C || A==D || B==C || B==D ||
                  (A<=C && D<=B) || (C<=A && B<=D) ||
                   (A<=C && B>=C)  || (A<=D && B>=D) ||
                   (C<=A && D>=A) || (C<=B && D>=B))
                {
                    ++total;
                    Check = true;
                    break;
                }
            }
            if(Check) break;
        }
    }
    cout << total;
    return 0;
}
