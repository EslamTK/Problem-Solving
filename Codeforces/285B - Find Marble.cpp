#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,s,t,op=0;
    cin >> n >> s >> t;;
    int Numbers[n],p=s;
    for(int i=0;i<n;i++) cin >> Numbers[i];

    while ( p!=t )
    {
        p = Numbers[p-1];
        ++op;
        if( p==s )
        {
         cout << "-1";
         return 0;
        }
    }
    cout << op;
    return 0;
}
