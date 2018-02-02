#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <int> Numbers;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        Numbers.insert(x);
    }
    for(int i=1;;++i)
    {
        if(Numbers.find(i)==Numbers.end())
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}
