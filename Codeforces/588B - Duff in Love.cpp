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
    ll n;
    cin >> n;
    set <ll> Dic;
    set <ll>::reverse_iterator it;
    set <ll>::iterator it2;
    if(n<4)
    {
        cout << n;
        return 0;
    }
    Dic.insert(n);
    for(ll i=2;i<=sqrt(n);++i)
    {
        if(!(n%i))
        {
            Dic.insert(i);
            Dic.insert(n/i);
        }
    }
    ll Temp;
    bool Check;
    for(it=Dic.rbegin();it!=Dic.rend();++it)
    {
        Check = 1;
        for(it2=Dic.begin();*it2!=*it;++it2)
        {
            Temp = (*it2)*(*it2);
            if(Temp>*it) break;
            if(!(*it%Temp))
            {
                Check = 0;
                break;
            }
        }
        if(Check)
        {
            cout << *it;
            return 0;
        }
    }
    return 0;
}
