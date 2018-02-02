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
bool IsPrim(int n);
int main()
{
    int n;
    cin >> n;
    if(IsPrim(n))
    {
        cout << "1" << endl << n;
        return 0;
    }
    for(int i=n-1;;--i)
    {
        if(IsPrim(i))
        {
            if(IsPrim(n-i))
            {
             cout << "2" << endl << i << " " << n-i;
             return 0;
            }
            for(int j=n-i-1;j>2;--j)
            {
                if(IsPrim(j))
                {
                    if(IsPrim(n-i-j))
                    {
                        cout << "3" << endl << i << " " << j << " " << n-i-j;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
bool IsPrim(int n)
{
    if(n%2==0 || n==1) return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(!(n%i)) return false;
    }
    return true;
}
