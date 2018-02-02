#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int Arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> Arr[i];
    }
    sort(Arr,Arr+n);
    int coun = 0;
    for(int i=2;i<n;i+=3)
    {
        if(Arr[i]+k<=5)
        {
            coun++;
        }
        else
        {
            break;
        }
    }
    cout << coun;
    return 0;
}
