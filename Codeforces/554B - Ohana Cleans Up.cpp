#include <iostream>
#include <map>
using namespace std;
int main()
{
    map <string,int> Rep;
    map <string,int>::iterator it;
    int n;
    cin >> n;
    string x;
    while(n>0)
    {
        cin >> x;
        if(Rep.find(x)==Rep.end())
        {
            Rep.insert(make_pair(x,1));
        }
        else
        {
            ++Rep[x];
        }
        --n;
    }
    int Max = 0;
    for(it=Rep.begin();it!=Rep.end();++it)
    {
        if(it->second>Max)
        {
            Max = it->second;
        }
    }
    cout << Max;
    return 0;
}
