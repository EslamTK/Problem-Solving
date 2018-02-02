#include <iostream>
using namespace std;
int main()
{
    int n,d,t,Sum=0;
    cin >> n >> d;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        Sum += t;
    }
    int req = 10*(n-1);
    if((Sum+req)>d)
    {
        cout << "-1";
    }
    else
    {

        cout << ((d-(req+Sum))/5)+(req/5);
    }
    return 0;
}
