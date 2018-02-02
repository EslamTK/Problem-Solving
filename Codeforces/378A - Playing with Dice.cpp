#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,a1=0,b1=0,d=0;
    cin >> a >> b;
    for(int i=1;i<7;++i)
    {
        if(abs(a-i)<abs(b-i))
        {
            a1++;
        }
        else if (abs(a-i)>abs(b-i))
        {
            b1++;
        }
        else
        {
            d++;
        }
    }
    cout << a1 << " " << d << " " << b1;
    return 0;
}
