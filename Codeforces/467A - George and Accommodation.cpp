#include <iostream>
using namespace std;
int main()
{
int x;
cin >>x;
int a,b,coun=0;
while (x>0)
{
    cin >>a>>b;
    if ((b-a)>=2)
    {
        coun++;
    }
    x--;
}
cout << coun;
    return 0;
}
