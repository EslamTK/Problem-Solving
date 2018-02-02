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
    int n,m,Per = 0,Index;
    cin >> n >> m;
    string Text;
    cin >> Text;
    char c;
    for(int i=0;i+1<n;++i)
    {
        if(Text[i]=='.' && Text[i+1]=='.') ++Per;
    }
    while(m--)
    {
        cin >> Index >> c;
        --Index;
        if(c!=Text[Index])
        {
        if(Text[Index]=='.')
        {
         if(Index>0)   if(Text[Index-1]=='.') --Per;
         if(Index+1<n) if(Text[Index+1]=='.') --Per;
        }
        else if(c=='.')
        {
          if(Index>0)   if(Text[Index-1]=='.') ++Per;
          if(Index+1<n) if(Text[Index+1]=='.') ++Per;
        }
        Text[Index] = c;
        }
        cout << Per << endl;
    }
    return 0;
}
