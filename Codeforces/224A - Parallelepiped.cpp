#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int a=sqrt(x*z/y),b=sqrt(x*y/z),c=sqrt(y*z/x);
    cout << 4*(a+b+c);
    return 0;
}
