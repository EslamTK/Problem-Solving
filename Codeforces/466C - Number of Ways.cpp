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
    int n;
    bool Check = 0;
    ll nWays=0,Sum=0,FirstSum=0,SecondSum=0,ThirdSum=0,Temp=0;
    cin >> n;
    int Arr[n];
    forn(i,n)
    {
        cin >> Arr[i];
        Sum += Arr[i];
        if(Arr[i]!=0) Check = 1;
    }
    if(Sum%3!=0)
    {
        cout << 0;
        return 0;
    }
    for(int i=0;i+2<n;++i)
    {
        FirstSum += Arr[i];
        if(3*FirstSum==Sum)
        {
           if(Arr[i]==0 && Temp>0)
           {
               if(!Check) --Temp;
               nWays += Temp;
           }
           else
           {
           Temp = 0;
           SecondSum = 0;
           for(int j=i+1;j+1<n;++j)
           {
               SecondSum += Arr[j];
               ThirdSum = Sum - (FirstSum+SecondSum);
               if(FirstSum==SecondSum && FirstSum==ThirdSum)
               {
                   ++nWays;
                   ++Temp;
               }
           }
           }
        }
        else Temp = 0;
    }
    cout << nWays;
    return 0;
}
