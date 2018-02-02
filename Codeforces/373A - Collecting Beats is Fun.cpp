#include <iostream>
using namespace std;
int main()
{
    int n;
    char x;
    cin >> n;
    int Times[9]={0};
    for(int i=0;i<16;i++)
    {
        cin >> x;
        if(x!='.')
        {
            ++Times[(x-'0')-1];
        }
    }
    n *= 2;
    for(int i=0;i<9;i++)
    {
        if(Times[i]>n)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
