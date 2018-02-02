#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
int siz;
cin >> siz;
string x;
cin >> x;
if (siz<26)
{
    cout << "NO";
}
else
    {
int coun=0;
char a;
string lower="";
for (int i=0;i<siz;i++)
{
 a = tolower(x[i]);
 lower +=a;
}

for (int i=97;i<123;i++)
{
    for(int j=0;j<siz;j++)
    {
        if ( lower[j]==char(i) )
        {
            coun++;
            break;
        }
    }
}
if (coun>=26)
{
    cout << "YES";
}
else
    cout << "NO";
    }
    return 0;
}
