#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x,Min=0;
    string y,z;
    cin >> x >> y >> z;
    for (int i=0;i<x;i++)
    {
        if(z[i]!=y[i])
        {
            int a = z[i]-'0';
            int b = y[i]-'0';
            int temp1=0,temp2=0;
            for(int j=b;j!=a;j++)
            {
                temp1++;
                if(j>=9)
                {
                 j = -1;
                }
            }
            for(int j=b;j!=a;j--)
            {
                temp2++;
                if(j<=0)
                {
                 j = 10;
                }
            }
             Min += min(temp1,temp2);
        }
    }
    cout << Min;
    return 0;
}
