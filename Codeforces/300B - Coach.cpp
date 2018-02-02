#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector < set<int> > Groups;
    set <int>::iterator it;
    int n,m,x,y;
    cin >> n >> m;
    bool Used[n],Check;
    for(int i=0;i<n;++i) Used[i] = 0;
    while(m--)
    {
        Check = 0;
        cin >> x >> y;
        Used[x-1] = Used[y-1] = 1;
        for(int i=0;i<Groups.size();++i)
        {
            if(Groups[i].find(x)!=Groups[i].end())
            {
            Groups[i].insert(y);
            Check = 1;
            }

            if (Groups[i].find(y)!=Groups[i].end())
            {
                Groups[i].insert(x);
                Check = 1;
            }
        }
        if(!Check)
        {
            set <int> Temp;
            Temp.insert(x),Temp.insert(y);
            Groups.push_back(Temp);
        }
    }
    for(int i=0;i<n;++i)
    {
        if(!Used[i])
        {
        Check = 0;
        for(int j=0;j<Groups.size();++j)
        {
            if(Groups[j].size()<3)
            {
                Groups[j].insert(i+1);
                Check = 1;
                break;
            }
        }
        if(!Check)
        {
            set <int> Temp;
            Temp.insert(i+1);
            Groups.push_back(Temp);
        }
        }
    }

    if(n/3!=Groups.size())
    {
        cout << "-1";
        return 0;
    }
    for(int i=0;i<Groups.size();++i)
    {
        if(Groups[i].size()!=3)
        {
            cout << "-1";
            return 0;
        }
    }

    for(int i=0;i<Groups.size();++i)
    {
        for(it=Groups[i].begin();it!=Groups[i].end();++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
