#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap <int,int> Dragons;
    multimap <int,int>::iterator it;
    int Pow,N,X,Y;
    cin >> Pow >> N;
    while(N>0)
    {
        cin >> X >> Y;
        Dragons.insert(make_pair(X,Y));
        N--;
    }
    for (it=Dragons.begin();it!=Dragons.end();++it)
    {
        if( Pow > it->first)
        {
            Pow += it->second;
        }
        else
        {
            cout << "NO";
            return 0;
        }

    }
    cout << "YES";
    return 0;
}
