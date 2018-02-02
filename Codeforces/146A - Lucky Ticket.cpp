#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int len,h1=0,h2=0;
    string number;
    cin >> len;
    cin >> number;
    int c=0,j=0;
    while (number[j]=='7' || number[j]=='4')
    {
        c++;
        j++;
    }

    if (c==len)
    {
    for (int i=0;i<len;i++)
    {
        if (i<len/2)
        {
            h1+=(number[i]-'0');
        }
        else
            h2+=(number[i]-'0');
    }
    }

    if (c==len && h1/2==h2/2)
    {
    cout << "YES";
    }
    else
    cout << "NO";
    return 0;
}
