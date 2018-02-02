#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    string x;
    for(int i=0;i<n;i++)
    {
    cin >> x;
    for(int j=0;j<m;j++)
    {
    if(x[j]=='.')
    {
    if ( (i+j)%2!=0 )
    {
    x[j] = 'W';
    }
    else
    {
    x[j] = 'B';
    }
    }
    }
    cout << x << endl;
    }
    return 0;
}
