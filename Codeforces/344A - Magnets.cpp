#include <iostream>
using namespace std;
int main()
{
    int n,x,temp=0,result=0;
    cin >> n;
    while (n>0)
    {
        cin >> x;
        if (x!=temp)
        {
        result++;
        temp = x;
        }
        n--;
    }
    cout << result;
    return 0;
}