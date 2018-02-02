#include <iostream>
#include <set>
using namespace std;
set <long long> TPrims;
inline void TPrim();
int main()
{
    int n;
    cin >> n;
    long long Arr[n];
    for(int i=0;i<n;++i) { cin >> Arr[i]; }
    TPrim();
    for(int i=0;i<n;++i)
    {
       if(TPrims.find(Arr[i])!=TPrims.end())
       {
           cout << "YES\n";
       }
       else
       {
           cout << "NO\n";
       }
    }
    return 0;
}
inline void TPrim()
{
    bool Check = 0;
    TPrims.insert(4);
    for(long long i=3;i<1000000;++i)
    {
        Check = 1;
        if(i%2==0)
        {
            Check = 0;
        }
        else
        {
        for(long long j=3;j*j<=i;j+=2)
        {
            if(i%j==0)
            {
                Check  = 0;
                break;
            }
        }
        }
        if(Check)
        {
            TPrims.insert(i*i);
        }
    }
}
