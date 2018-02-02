
#include <iostream>
using namespace std;
int main()
{
    int n,x,nx=0;
    cin >> n >> x;
    for(int i=1;i<=n;++i)
    {
        if (x%i==0 && x/i<=n) ++nx;
    }
    cout << nx;
    return 0;
}
