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
    int n , m;
    cin >> n >> m;
    string Text;
    cin >> Text;
    char a,b;
    string Dic = "abcdefghijklmnopqrstuvwxyz";
    while(m--)
    {
        cin >> a >> b;
        forn(i,Dic.size())
        {
            if(Dic[i]==a) Dic[i] = b;
            else if (Dic[i]==b) Dic[i] = a;
        }
    }
    forn(i,Text.size()) cout << Dic[int(Text[i])-97];
    return 0;
}
