#include <iostream>
#include <map>
using namespace std;
int main()
{
    map <string,int> Teams;
    map <string,int>::iterator it;
    int n;
    cin >> n;
    string x;
    while(n>0)
    {
        cin >> x;
        if(Teams.find(x)!=Teams.end())
        {
            ++Teams[x];
        }
        else
        {
            Teams.insert(make_pair(x,1));
        }
        --n;
    }
    n = 0;
    for(it=Teams.begin();it!=Teams.end();++it)
    {
        if(it->second > n)
        {
            x = it->first;
            n = it->second;
        }
    }
    cout << x;
    return 0;
}
