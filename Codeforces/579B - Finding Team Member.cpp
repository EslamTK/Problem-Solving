#include <iostream>
#include <map>
using namespace std;
int main()
{
    map < int,pair<int,int> > Teams;
    map < int,pair<int,int> >::reverse_iterator it;
    int Used[802] = {0};
    int n,stren;
    cin >> n;
    n *= 2;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<i;++j)
        {
            cin >> stren;
            Teams.insert(make_pair(stren,make_pair(i,j)));
        }

    }
    for(it=Teams.rbegin();it!=Teams.rend();++it)
    {
        if(!Used[it->second.first] && !Used[it->second.second])
        {
            Used[it->second.first]=it->second.second;
            Used[it->second.second]=it->second.first;
        }
    }
    for(int i=1;i<=n;++i)
    {
       cout << Used[i] << " ";
    }
    return 0;
}
