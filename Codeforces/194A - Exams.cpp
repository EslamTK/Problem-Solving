#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    if(k<3*n)
    {
        cout << 3*n-k;
    }
    else
    {
        cout << "0";
    }
    return 0;
}
