#include <iostream>
using namespace std;
int main()
{
int t;
cin >> t;
int ar[t];
for (int i=1,j=0;i<=t;i++)
{
    cin >> j;
    ar[j-1] = i;
}
for (int i=0;i<t;i++)
{
    cout << ar[i] << " ";
}
    return 0;
}
