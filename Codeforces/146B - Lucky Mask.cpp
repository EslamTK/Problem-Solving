#include <iostream>
using namespace std;
int main()
{
    int a,b,c,Temp;
    cin >> a >> b;
    for(;;)
    {
        ++a;
        Temp = a, c=0;
        while(Temp)
        {
            if(Temp%10==7 || Temp%10==4) c = c*10 + Temp%10;
            Temp /= 10;
        }
        if(c!=0)
        {
        Temp = c;
        c = 0;
        while(Temp)
        {
            if(Temp%10==7 || Temp%10==4) c = c*10 + Temp%10;
            Temp /= 10;
        }
        }
        if(c==b) break;
    }
    cout << a;
    return 0;
}
