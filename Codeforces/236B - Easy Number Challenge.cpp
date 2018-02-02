#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,Sum = 0,Temp,nD,exponent;
    cin >> a >> b >> c;
    for(int i=1;i<=a;++i)
    {
        for(int j=1;j<=b;++j)
        {
            for(int k=1;k<=c;++k)
            {
                Temp = i*j*k;
                nD = 1;
                for (int l = 2; l <= Temp; l++)
                {
                exponent = 0;
                while (Temp % l == 0)
                {
                   exponent++;
                   Temp /= l;
                }
                   nD *= (exponent+1);
                }
                Sum += nD;
            }
        }
    }
    cout << Sum%1073741824;
    return 0;
}
