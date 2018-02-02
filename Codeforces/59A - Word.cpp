#include <iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int siz = x.size() , upp=0;
    for (int i=0;i<siz;i++)
    {
        if (isupper(x[i]))
        {
            upp++;
        }
    }
    if (upp>siz/2)
    {
       for (int i=0;i<siz;i++)
    {
        cout << char(toupper(x[i]));
    }
    }
    else
    {
        for (int i=0;i<siz;i++)
    {
        cout << char(tolower(x[i]));
    }
    }
    return 0;
}
