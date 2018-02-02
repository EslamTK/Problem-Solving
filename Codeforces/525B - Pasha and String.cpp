#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int Arr[200001] = {0};
    string x;
    cin >> x;
    int days, start,Len = x.size();
    cin >> days;
    while (days--)
    {
    scanf("%i",&start);
    ++Arr[start-1];
    }

    for(int i=1;i<Len/2;++i)
    {
       Arr[i] += Arr[i-1];
    }

    for(int i=0;i<Len/2;++i)
    {
    if(Arr[i]%2!=0)
    {
        swap(x[i],x[Len-i-1]);
    }
    }
    cout << x;
    return 0;
}
