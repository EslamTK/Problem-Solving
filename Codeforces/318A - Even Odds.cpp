#include <iostream>
using namespace std;
int main()
{
    long long N,K,Mid=0,Req=0;
    cin >> N >> K;
    if(N%2==0)
    {
    Mid = N/2;
    }
    else
    {
    Mid = (N/2) + 1;
    }
    if(K<=Mid)
    {
        Req = 1;
        for(long long i=1;i<K;i++)
        {
            Req += 2;
        }
    }
    else
    {
        Req = 2;
        K -= Mid;
        for(long long i=1;i<K;i++)
        {
            Req += 2;
        }
    }
    cout << Req;
    return 0;
}
