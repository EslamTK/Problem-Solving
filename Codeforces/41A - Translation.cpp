#include <iostream>
using namespace std;
int main()
{
string x,y;
cin >>x>>y;
bool check = true;
int siz=x.size();
for (int i=0,j=siz-1;i<siz;i++,j--)
{
    if (x[i]!=y[j])
    {
        cout << "NO";
        check = false;
        break;
    }
}
if (check)
{
    cout << "YES";
}
    return 0;
}
