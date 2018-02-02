#include <iostream>
#include <set>
#include <cmath>
using namespace std;
int main()
{
    set <long long> Num;
    set <long long>::iterator it;
    long long n,e;
    cin >> n;
    e = sqrt(2*n);
    for(long long i=1;i<=e;i++)
    {
        Num.insert((i*(i+1)) >> 1);
    }
    for(it=Num.begin();it!=Num.end();++it)
    {
        if(Num.find(n-*it)!=Num.end())
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
