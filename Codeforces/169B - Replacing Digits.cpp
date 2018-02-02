#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a,s;
    bool check;
    cin >> a >> s;
    sort(&s[0],&s[0]+s.size());
    for(int i=s.size()-1,j=0;i>=0;--i)
    {
        check = false;
        for(;j<a.size();++j)
        {
            if(s[i]>a[j])
            {
                a[j] = s[i];
                check = true;
                break;
            }
        }
        if(!check)
        {
            break;
        }
    }
    cout << a;
    return 0;
}
