#include <stdio.h>
#include <map>
using namespace std;
int main()
{
    map <int,int> HomesKit;
    int n,x;
    scanf("%i",&n);
    int AwayKit[n];
    int Result[n][2];
    for(int i=0;i<n;++i)
    {
    scanf("%i%i",&x,&AwayKit[i]);
    if(HomesKit.find(x)!=HomesKit.end())
    {
        ++HomesKit[x];
    }
    else
    {
        HomesKit.insert(make_pair(x,1));
    }
    }
    int Home=0,Away=0;
    for(int i=0;i<n;++i)
    {
    Home=n-1;
    if(HomesKit.find(AwayKit[i])!=HomesKit.end())
    {
        Home += HomesKit[AwayKit[i]];
        Away = (n-1)-HomesKit[AwayKit[i]];
    }
    else
    {
        Away = n-1;
    }
    printf("%i %i\n",Home,Away);
    }
    return 0;
}
