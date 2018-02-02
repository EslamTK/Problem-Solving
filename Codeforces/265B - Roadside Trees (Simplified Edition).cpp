#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,Min=0;
    cin >> n;
    int Trees[n];
    for(int i=0;i<n;++i) cin >> Trees[i];
    Min = Trees[0]+1;
    for(int i=1;i<n;i++)
    {
        Min += 2 + abs(Trees[i]-Trees[i-1]);
    }
    cout << Min;
    return 0;
}
