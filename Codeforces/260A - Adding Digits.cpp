#include <iostream>
using namespace std;
int main()
{
    int a,b,n,Temp;
    cin >> a >> b >> n;
    for(int i=0;i<1;i++)
    {
        a *= 10;
        for(int j=0;j<10;j++)
        {
            Temp = a + j;
            if(!(Temp%b))
            {
                cout << Temp;
                for(int k=1;k<n;++k) cout << "0";
                return 0;
            }
        }
    }
    cout << "-1";
    return 0;
}
