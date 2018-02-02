#include <iostream>
using namespace std;
int main()
{
    int nDays,C,xDay,Temp,Max=0;
    cin >> nDays >> C;
    int Days[nDays];
    for(int i=0;i<nDays;i++)
    {
        cin >> Days[i];
    }
    for(int i=0;i+1<nDays;i++)
    {
        Temp = Days[i]-Days[i+1];
        if(Temp>Max)
        {
            Max = Temp;
        }
    }
    if((Max-C)<1)
    {
        cout << "0";
    }
    else
    {
        cout << Max-C;
    }
    return 0;
}
