#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int nSupply,mDevice,kSockets;
    cin >> nSupply >> mDevice >> kSockets;
    int Filters[nSupply];
    for(int i=0;i<nSupply;++i)
    {
        cin >> Filters[i];
    }
    if(mDevice>kSockets)
    {
        sort(Filters,Filters+nSupply);
        int nFilters=0;
        while(kSockets<mDevice)
        {
            if(nSupply<=0)
            {
                cout << "-1";
                return 0;
            }
            else
            {
                --nSupply;
                kSockets += Filters[nSupply]-1;
                ++nFilters;
            }
        }
        cout << nFilters;
    }
    else
    {
        cout << "0";
    }
    return 0;
}
