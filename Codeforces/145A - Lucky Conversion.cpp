#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int result = 0;
    int n7 = 0;
    int n4 = 0;

    for (int i=0; i<b.size(); i++)
    {
        if( a[i] != b[i] )
        {
            if(a[i] == '7')
                n7++;
            else
                n4++;
        }
    }
    if (n7 == n4)
        result = n7;
    else
    {
        if(n7 > n4)
        {
            result = n7;
        }
        else
        {
            result = n4;
        }
    }
    cout << result;
    return 0;
}
