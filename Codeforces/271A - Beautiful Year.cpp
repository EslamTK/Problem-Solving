#include <iostream>
using namespace std;
int main()
{
int x;
cin >> x;
int NewYear=x+1;
for(;;)
{
    int a = (NewYear/1)%10;
    int b = (NewYear/10)%10;
    int c = (NewYear/100)%10;
    int d = (NewYear/1000)%10;
    if (a!=b && a!=c && a!=d && b!=a && b!=c && b!=d &&
         c!=a && c!=b && c!=d && d!=a && d!=b && d!=c)
    {
        cout << NewYear;
        break;
    }
    else{
        NewYear++;
        }
}
    return 0;
}
