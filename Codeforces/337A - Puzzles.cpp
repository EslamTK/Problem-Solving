#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[m];
    for (int i=0;i<m;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+m);
    n--;
    int Min = arr[n] - arr[0];
    int temp = 0;
    for (int i=1;i+n<m;i++)
    {
        temp = arr[i+n] - arr[i];
        if (temp<Min)
        {
            Min = temp;
        }
    }
    cout << Min;
    return 0;
}
