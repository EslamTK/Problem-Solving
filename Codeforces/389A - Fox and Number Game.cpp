#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,Sum=0;
    cin >> n;
    int Numbers[n];
    for(int i=0;i<n;i++){cin>>Numbers[i];}
    sort(Numbers,Numbers+n);
    while(Numbers[n-1]>Numbers[0])
    {
        for(int i=n-1;i>0;i--)
        {
            if(Numbers[i]>Numbers[i-1])
            {
                Numbers[i] = Numbers[i] - Numbers[i-1];
            }
        }
        sort(Numbers,Numbers+n);
    }
    for(int i=0;i<n;i++){Sum+=Numbers[i];}
    cout << Sum;
    return 0;
}
