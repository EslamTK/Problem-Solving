#include <iostream>
using namespace std;
int main()
{
unsigned long long a , b , temp=0 ,coun=0;
cin >> a >> b;
while (b)
{
    coun += a/b;
    a = a%b;
    temp = a;
    a = b;
    b = temp;
}
cout << coun;
    return 0;
}
