#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> V1;
    vector <int> V2;
    vector <int> V3;
    int n,x;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> x;
        if(x==1)
        {
            V1.push_back(i);
        }
        else if(x==2)
        {
            V2.push_back(i);
        }
        else
        {
           V3.push_back(i);
        }
    }
    x = min(min(V1.size(),V2.size()),V3.size());
    cout << x << endl;
    for(int i=0;i<x;i++)
    {
        cout << V1[i] << " " << V2[i] << " " << V3[i] << " " << endl;
    }
    return 0;
}
