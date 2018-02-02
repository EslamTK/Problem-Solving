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
    int n,k,Min=101,Max=0;
    cin >> n >> k;
    int Arr[n];
    forn(i,n)
    {
        cin >> Arr[i];
        if(Arr[i]<Min) Min = Arr[i];
        if(Arr[i]>Max) Max = Arr[i];
    }
    if((Max-Min)>k)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
        forn(i,n)
        {
            cout << endl;
            for(int j=0,l=1;j<Arr[i];++j)
            {
                cout << l++ << " ";
                if(l>k) l = 1;
            }
        }
    }
    return 0;
}
