#include <iostream>
#include <string>
using namespace std;
int main()
{
string x;
cin >> x;
int alpha[27]={0};
int coun = 0;
int siz = x.size();
for (int i=0;i<siz;i++)
{
alpha[int(x[i])-97]++;
}
for (int i=0;i<27;i++)
{
    if ( alpha[i]%2!=0 )
    {
        coun++;
    }
}
if (coun%2!=0 || coun==0)
{
    cout << "First";
}
else
{
    cout << "Second";
}
    return 0;
}