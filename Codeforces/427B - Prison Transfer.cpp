#include <iostream>
using namespace std;
int main()
{
    long long n,t,c,Ways=0,Seg=0,Sev=0;
    cin >> n >> t >> c;
    for(int i=0;i<n;++i)
    {
        cin >> Sev;
        if(Sev<=t)
        {
            ++Seg;
        }
        else
        {
            if(Seg>=c) Ways += Seg-c+1;

            Seg = 0;
        }
    }
    if(Seg>=c) Ways += Seg-c+1;

    cout << Ways;
    return 0;
}
