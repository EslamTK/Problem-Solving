#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string x;
    int arr[4];
    cin >> x; arr[0] = x.size()-2;cin >> x; arr[1] = x.size()-2;
    cin >> x; arr[2] = x.size()-2;cin >> x; arr[3] = x.size()-2;
    int *ptr = min_element(arr,arr+4);
    bool check = 1;
    for(int i=0;i<4;i++)
    {
        if(ptr!=&arr[i])
        {
            if(((*ptr)*2)>arr[i])
            {
                check = 0;
            }
        }
    }
    int *ptr2 = max_element(arr,arr+4);
    bool check2 = 1;
    for(int i=0;i<4;i++)
    {
        if(ptr2!=&arr[i])
        {
            if((*ptr2)<(2*arr[i]))
            {
                check2 = 0;
            }
        }
    }
    if((!check && !check2) || (check && check2))
    {
        cout << "C";
    }
    else if(check)
    {
        cout << char((ptr-&arr[0])+65);
    }
    else
    {
        cout << char((ptr2-&arr[0])+65);
    }
    return 0;
}
