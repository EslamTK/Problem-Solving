#include <iostream>
using namespace std;
int main()
{
    int n,one=0,zero=0;
    cin >> n;
    string x;
    cin >> x;
    for(int i=0;i<n;i++)
    {
        if(x[i]=='1')
        {
            ++one;
        }
        else
        {
            ++zero;
        }
    }
    n = x.size()-(min(one,zero)*2);
    cout << n;
    return 0;
}
