#include <iostream>
using namespace std;
int main()
{
    int p,x,Res=0;
    cin >> p;
    for (int n = 1; n < p; ++n)
    {
    bool ok = true;
    int x = 1;
    for (int i = 1; i < p - 1; ++i)
    {
    x *= n;
    x %= p;
    if (x == 1)
    {
    ok = false;
    break;
    }
    }
    if (ok)
    {
    x *= n;
    x %= p;
    if (x == 1)
    {
    Res += 1;
    }
    }
    }
    cout << Res;
    return 0;
}
