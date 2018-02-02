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
    int n,m;
    cin >> n >> m;
    int Arr[m];
    forn(i,m) cin >> Arr[i];
    sort(Arr,Arr+m);
    if(Arr[0]==1 || Arr[m-1]==n)
    {
        cout << "NO";
        return 0;
    }
    int Coun = 0;
    forn(i,m-1)
    {
        if(Arr[i]+1==Arr[i+1])
        {
            ++Coun;
            if(Coun>1)
            {
                cout << "NO";
                return 0;
            }
        }
        else Coun = 0;
    }
    cout << "YES";
    return 0;
}
