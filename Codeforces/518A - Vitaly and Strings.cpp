#include <iostream>
#include <string>
using namespace std;
int main()
{
string s , t;
cin >> s >> t;
string out = s;
int i = out.size()-1;
while (out[i]=='z')
{
    out[i]='a';
    i--;
}
out[i]+=1;
if (out<t && out>s)
{
    cout << out;
}
else
{
cout << "No such string";
}
    return 0;
}
