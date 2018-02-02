#include <iostream>
using namespace std;
int main()
{
    int n,s,x,y,temp=-1;
    bool check = true;
    cin >> n >> s;
    while (n>0)
    {
        cin >> x >> y;
        if ( (x<s) || (x==s && y==0) )
        {
            if(check)
            {
                temp = y;
                check = false;
            }
            if (y<temp && y>0)
            {
                temp = y;
            }
        }
        n--;
    }
    if (check)
    {
        cout << "-1";
    }
    else if(temp==0)
    {
        cout << "0";
    }
    else
    {
        cout << 100-temp;
    }
    return 0;
}
