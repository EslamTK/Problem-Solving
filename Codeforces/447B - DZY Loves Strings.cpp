#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string x;
    int k,Arr[26],Value = 0;
    cin >> x >> k;
    for(int i=0;i<26;i++){ cin >> Arr[i]; }
    int Max = *max_element(Arr,Arr+26);
    for(int i=0;i<x.size();i++)
    {
        Value += Arr[int(x[i])-97]*(i+1);
    }
    for(int i=x.size()+1;i-x.size()<=k;i++)
    {
        Value += i*Max;
    }
    cout << Value;
    return 0;
}
