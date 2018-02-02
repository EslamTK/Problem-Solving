#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m,s;
    cin >> m >> s;
    if( s==0 && m>1 || (m*9<s) )
    {
        cout << "-1 -1";
        return 0;
    }
    string mx="",mn="";
    for(int i=0;i<m;++i)
    {
        if(s>=9)
        {
            mx += '9';
            s -= 9;
        }
        else
        {
            mx += (s+'0');
            s = 0;
        }
    }
    mn = mx;
    reverse(mn.begin(),mn.end());

    if(mn[0]=='0')
    {
      for(int j=1;j<mn.size();++j)
      {
                if(mn[j]!='0')
                {
                    mn[0] = '1';
                    mn[j] -= 1;
                    break;
                }
      }
    }
    cout << mn << " " << mx;
    return 0;
}
