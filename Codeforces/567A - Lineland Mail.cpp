#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long City[n];
    for(int i=0;i<n;i++) cin >> City[i];
    long long Max,Min;
    cout << long(abs(City[0]-City[1])) << " " << long(abs(City[0]-City[n-1])) << endl;
    for(int i=1;i+1<n;i++)
    {
        Min = min(abs(City[i]-City[i+1]),abs(City[i]-City[i-1]));
        Max = max(abs(City[i]-City[0]),abs(City[i]-City[n-1]));
        cout << Min << " " << Max << endl;
    }
    cout << long(min(abs(City[n-1]-City[n-2]),abs(City[n-1]-City[0]))) << " " << long(abs(City[n-1]-City[0])) << endl;
    return 0;
}