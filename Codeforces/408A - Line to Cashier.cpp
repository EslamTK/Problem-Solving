#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int nCash,x=0,Temp=0;
    cin >> nCash;
    int nPeople[nCash];
    for(int i=0;i<nCash;++i)
    {
        cin >> nPeople[i];
    }
    for(int i=0;i<nCash;++i)
    {
        Temp = 0;
        for(int j=0;j<nPeople[i];j++)
        {
            cin >> x;
            Temp += x*5;
        }
        Temp += nPeople[i]*15;
        nPeople[i] = Temp;
    }
    cout << *(min_element(nPeople,nPeople+nCash));
    return 0;
}
