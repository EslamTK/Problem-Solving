#include <iostream>
using namespace std;
int main()
{
    int k,d;
    cin >> k >> d;
    if((d==0 && k==0) ||(d==0 && k>1))
    {
        cout << "No solution";
        return 0;
    }
    cout << d;
    --k;
    while(k>0)
    {
        cout << "0";
        --k;
    }
    return 0;
}
