#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,Am=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=1;i<n;i++)
    {
        if( arr[i]>*max_element(arr,arr+i) || arr[i]<*min_element(arr,arr+i) ) ++Am;
    }
    cout << Am;
    return 0;
}
