#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int Mid = (n+1)/2;
    while(Mid<=n)
    {
        if(Mid%m==0)
        {
            cout << Mid;
            return 0;
        }
        ++Mid;
    }
    cout << "-1";
    return 0;
}
