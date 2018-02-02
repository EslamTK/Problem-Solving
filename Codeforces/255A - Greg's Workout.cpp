#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,x,ex[3]={0};
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        ex[i%3] += x;
    }
    int *ptr = max_element(ex,ex+3);
    if (*ptr == ex[0])
    {
        cout << "chest";
    }
    else if (*ptr == ex[1])
    {
        cout << "biceps";
    }
    else
    {
        cout << "back";
    }
    return 0;
}