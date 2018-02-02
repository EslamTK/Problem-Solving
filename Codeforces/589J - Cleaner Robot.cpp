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
    int n,m,r,c;
    cin >> n >> m;
    char Arr[n][m];
    forn(i,n)
    {
        forn(j,m)
        {
         cin >> Arr[i][j];
         if(isalpha(Arr[i][j]))
         {
             r = i;
             c = j;
         }
        }
    }
    char Dic[4] = {'U','R','D','L'};
    int in,Area = 0;
    forn(i,4)
    {
      if(Dic[i]==Arr[r][c]) in = i;
    }
    int Moves = 0;
    bool Check;
    while(Moves<10)
    {
        Check = 1;
        ++Moves;
        if(in==0)
        {
          for(;r>=0;--r)
          {
              if(Arr[r][c]=='*') break;

              if(Arr[r][c]!='x')
              {
                  ++Area;
                  if(Check)
                  {
                      --Moves;
                      Check = 0;
                  }
              }
              Arr[r][c]='x';
          }
          ++r;
          ++in;
        }
        else if(in==1)
        {
          for(;c<m;++c)
          {
              if(Arr[r][c]=='*') break;
              if(Arr[r][c]!='x')
              {
                  ++Area;
                  if(Check)
                  {
                      --Moves;
                      Check = 0;
                  }
              }
                 Arr[r][c]='x';
          }
          --c;
          ++in;
        }
        else if(in==2)
        {
          for(;r<n;++r)
          {
              if(Arr[r][c]=='*') break;
              if(Arr[r][c]!='x')
              {
                  ++Area;
                  if(Check)
                  {
                      --Moves;
                      Check = 0;
                  }
              }
              Arr[r][c]='x';
          }
          --r;
          ++in;
        }
        else
        {
          for(;c>=0;--c)
         {
              if(Arr[r][c]=='*') break;
              if(Arr[r][c]!='x')
              {
                  ++Area;
                  if(Check)
                  {
                      --Moves;
                      Check = 0;
                  }
              }
              Arr[r][c]='x';
         }
         ++c;
         in = 0;
        }
    }
    cout << Area;
    return 0;
}
