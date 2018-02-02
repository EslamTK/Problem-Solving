#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;
int main()
{
map <string,string> Users;
set <string> Used;
map <string,string>::iterator it;
int nUsers;
string old,nw;
bool Check = true;
cin >> nUsers;
for (int i=0;i<nUsers;i++)
{
    cin >> old >> nw;
    Check = true;
    if (Used.find(nw)==Used.end())
    {
    for (it=Users.begin();it!=Users.end();++it)
    {
        if (it->second==old)
        {
          Used.insert(old);
          it->second = nw;
          Check = false;
          break;
        }
    }
    if (Check)
    {
      Users.insert( pair<string,string>(old,nw) );
    }
    }
}
    cout << Users.size() << endl;
    for (it=Users.begin();it!=Users.end();++it)
    {
        cout << it->first << " " << it->second << endl;
    }
   return 0;
}
