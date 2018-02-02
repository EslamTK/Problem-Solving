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
string Clean(string x);
bool IsBmail(string x);
int main()
{
    vector <string> Temp;
    map <string ,vector <string> > Out;
    int n;
    cin >> n;
    string Mails[n],M,T;
    bool Check;
    forn(i,n)
    {
        cin >> M;
        T = M;
        Check = 0;
        if(M.size()>10)
        {
            if(IsBmail(M))
            {
                Check = 1;
                M = Clean(M);
            }
        }
        if(!Check) forn(l,M.size()) M[l] = tolower(M[l]);
        if(Out.find(M)!=Out.end())
        {
            Out[M].push_back(T);
            Mails[i] = "*";
        }
        else
        {
         Mails[i] = M;
         Temp.push_back(T);
         Out.insert(mpr(M,Temp));
         Temp.clear();
        }
    }
    cout << Out.size() << endl;
    forn(i,n)
    {
        if(Mails[i][0]!='*')
        {
         cout << Out[Mails[i]].size();
         forn(j,Out[Mails[i]].size()) cout << " " << Out[Mails[i]][j];
         cout << endl;
        }
    }
    return 0;
}
string Clean(string x)
{
    string Temp = "";
    for(int i=0;i<x.size();++i)
    {
        if(isalpha(x[i])) Temp += tolower(x[i]);
        else if(x[i]=='+' || x[i]=='@') break;
    }
    return Temp;
}
bool IsBmail(string M)
{
    string Bmail="@bmail.com";
    for(int i=M.size()-1,j=Bmail.size()-1;i>=0,j>=0;--i,--j)
    {
            if(tolower(M[i])!=Bmail[j]) return false;
    }
    return true;
}
