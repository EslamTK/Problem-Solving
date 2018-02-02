#include <iostream>
#include <map>
using namespace std;
int main()
{
    map <int,int> Arr;
    map <int,int>::iterator it;
    int n,x;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        if(Arr.find(x)!=Arr.end())
        {
            ++Arr[x];
        }
        else
        {
            Arr.insert(make_pair(x,1));
        }
    }
    x = 0;
    for(it=Arr.begin();it!=Arr.end();++it)
    {
        if(it->second > x)
        {
            x = it->second;
        }
    }
    if(x<=((n+1)/2))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
