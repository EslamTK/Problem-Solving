#include <iostream>
using namespace std;
int main()
{
    unsigned long long k,l,Result=1,Pow=0;
    cin >> k >> l;
    while(Result<l)
    {
        Result *= k;
        if(Result==l)
        {
            cout << "YES" << endl << Pow;
            return 0;
        }
        ++Pow;
    }
    cout << "NO";
    return 0;
}