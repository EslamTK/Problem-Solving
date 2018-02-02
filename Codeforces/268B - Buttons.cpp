#include <iostream>
using namespace std;
int main()
{
    int x,Temp=0;
    cin >> x;
    int Arr[x];
    for(int i=0;i<x;i++)
    {
        Arr[i] = x-i;
        Temp = i-1;
        for(int j=i-1;j>=0;j--)
        {
            Arr[j] += x-Temp-2;
        }
    }
    Temp = 0;
    for (int i=0;i<x;i++)
    {
        Temp += Arr[i];
    }
    cout << Temp;
    return 0;
}
