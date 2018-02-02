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
    map <ll,ll> Dic;
    map <ll,ll>::iterator it;
    vector <ll> Colors;
    int n;
    cin >> n;
    ll Arr[n],Mid=(n+1)/2,Req=0,B;
    forn(i,n)
    {
        sf64(Arr[i]);
        sf64(B);
        if(Arr[i]==B)
        {
            Dic[Arr[i]]++;
        }
        else
        {
            Dic[Arr[i]]++;
            Dic[B]++;
        }
    }
    forc(it,Dic)
    {
        if(it->second>=Mid)
        {
            Req = 0;
            forn(i,n)
            {
                if(Arr[i]==it->first) ++Req;
            }
            Colors.push_back(max(ll(0),Mid-Req));
        }
    }
    if(Colors.empty()) cout << "-1";
    else cout << *min_element(Colors.begin(),Colors.end());
    return 0;
}
