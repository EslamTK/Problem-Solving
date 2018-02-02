#include <iostream>
#include <list>
using namespace std;
int main()
{
    list <int> Numbers;
    list <int>::iterator it;
    int n,x,Operations=0;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        Numbers.push_back(x);
    }
    x = 0;
    while(*(--Numbers.end())<=*(Numbers.begin()))
    {
        if(*(--Numbers.end())!=*(Numbers.begin()))
        {
            ++x;
        }
        ++Operations;
        Numbers.insert(Numbers.begin(),*(--Numbers.end()));
        Numbers.erase(--Numbers.end());
        if(Operations>=n)
        {
            if(x<1)
            {
                Operations = 0;
            }
            break;
        }
    }
    x = 0;
    for( it=Numbers.begin();it!=Numbers.end();++it)
    {
        if(x>*it)
        {
            cout << "-1";
            return 0;
        }
        x = *it;
    }
    cout << Operations;
    return 0;
}
