#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool IsPrim(int n);
int main()
{
    int n,Temp;
    vector <int> Prims;
    cin >> n;
    for(int i=2;i<=n;++i)
    {
        if(IsPrim(i))
        {
            Temp = i;
            while(Temp<=n)
            {
                Prims.push_back(Temp);
                Temp *= i;
            }
        }
    }
    cout << Prims.size() << endl;
    for(int i=0;i<Prims.size();++i)
    {
        cout << Prims[i] << " ";
    }
    return 0;
}
bool IsPrim(int n)
{
    if(n==1 || (n%2==0 && n!=2) ) return 0;

    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(!(n%i)) return 0;
    }
    return 1;
}
