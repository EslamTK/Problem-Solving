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
    int m,n;
    cin >> m >> n;
    bool A[m][n],B[m][n];
    mset(A,1);
    forn(i,m) forn(j,n) cin >> B[i][j];
    forn(i,m) forn(j,n){
    if(!B[i][j])
    {
        for(int k=0;k<n;++k) A[i][k] = 0;
        for(int k=0;k<m;++k) A[k][j] = 0;
    }
    }
    forn(i,m) forn(j,n){
    if(B[i][j])
    {
        bool Check = false;
        for(int k=0;k<n;++k) if (A[i][k]) Check = true;
        for(int k=0;k<m;++k) if (A[k][j]) Check = true;
        if(!Check)
        {
        cout << "NO";
        return 0;
        }
    }
    }
    cout << "YES";
    forn(i,m) { cout << endl; forn(j,n) cout << A[i][j] << " "; }
    return 0;
}
