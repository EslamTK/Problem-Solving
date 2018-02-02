#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x,s;
    getline(cin,x);
    getline(cin,s);
    int siz = s.size();
    int found = -1;
    bool check = 1;
    for (int i=0;i<siz;i++)
    {
    if (s[i]!=' ')
    {
    found = x.find(s[i]);
    if ( found >= 0 )
    {
    x.erase(found,1);
    }
    else
    {
        cout << "NO";
        check = 0;
        break;
    }
    }
    }
    if (check)
    {
        cout << "YES";
    }
    return 0;
}