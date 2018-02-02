#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool change = true;
    for (short i = 1; i < s.length(); i++)
    {
        if (s[i] >= 'a')
        {
            change = false;
            break;
        }
    }

    if (change)
    {
        for (short i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a')
            {
                s[i] = s[i] - 32;
            }
            else
            {
                s[i] = s[i] + 32;
            }
        }
    }

    cout << s << endl;
    return 0;
}
