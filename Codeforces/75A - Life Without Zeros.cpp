#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    unsigned int n1,n2,result;
    cin >>n1>>n2;
    result = n1 + n2;

    stringstream ss;
    ss << n1;
    string a = ss.str();

    stringstream zz;
    zz << n2;
    string b = zz.str();

    stringstream yy;
    yy << result;
    string c = yy.str();

    a.erase(remove(a.begin(),a.end(),'0'),a.end());
    b.erase(remove(b.begin(),b.end(),'0'),b.end());
    c.erase(remove(c.begin(),c.end(),'0'),c.end());

   n1 = atoi(a.c_str());
   n2 = atoi(b.c_str());
   result = atoi(c.c_str());

    if ((n1+n2)==result)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
