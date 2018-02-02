#include <iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int n=0;
    for (int i=0;i<word.size();i++)
    {
        if (word[i]=='H' || word[i]=='Q' || word[i]=='9')
        {
            cout << "YES";
            n++;
            break;
        }
    }
    if (n==0)
    {
        cout << "NO";
    }
    return 0;
}
