#include <iostream>
#include <map>
using namespace std;
int main()
{
int nUsers;
cin >> nUsers;
map <string,int> Users;
map <string,int>::iterator it;
string user;
while (nUsers>0)
{
    cin >> user;
    it = Users.find(user);
    if (it != Users.end())
    {
    Users[user]++;
    cout << user << Users[user] << endl;
    }
    else
    {
        Users.insert( pair <string,int> (user,0) );
        cout << "OK" << endl;
    }
    nUsers--;
}
return 0;
}