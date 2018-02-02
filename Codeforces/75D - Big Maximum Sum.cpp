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
ll Arr[50][4];
int Temp[5000];
void CreatMaxSum(int index,int len);
int main()
{
    ll n,m,l,index,sum=-100000,Max=-100000,Max1=-100000;
    cin >> n >> m;
    forn(i,n)
    {
        cin >> l;
        forn(j,l)
        {
            cin >> Temp[j];
        }
        CreatMaxSum(i,l);
    }
    while(m--)
    {
        cin >> index;
        --index;
        if(Arr[index][3]>Max1) Max1 = Arr[index][3];
        if((sum+Arr[index][1])>Max) Max = sum+Arr[index][1];
        sum = max(sum+Arr[index][0],max(Arr[index][0],Arr[index][2]));
        if(sum>Max) Max = sum;
    }
    cout << max(Max,Max1);
    return 0;
}
void CreatMaxSum(int index,int len)
{
    ll sum = Temp[0],sum1 = Temp[0],Max = Temp[0],Max1 = Temp[0];
    for(int i=1;i<len;++i)
    {
        sum += Temp[i];
        if(sum>Max) Max = sum;

        sum1 = max(sum1+Temp[i],ll(Temp[i]));
        if(sum1>Max1) Max1 = sum1;
    }
    Arr[index][0] = sum;
    Arr[index][1] = Max;
    Arr[index][3] = Max1;
    sum = Temp[len-1],Max = Temp[len-1];
    for(int i=len-2;i>=0;--i)
    {
        sum += Temp[i];
        if(sum>Max) Max = sum;
    }
    Arr[index][2] = Max;
}
