#include <iostream>
using namespace std;
int main()
{
    int BestM,x,Start,End,Total=0,stop=0;
    cin >> BestM >> x;
    while(BestM>0)
    {
        cin >> Start >> End;
        while(stop+x<Start)
        {
        stop += x;
        }
        Total += End - stop;
        stop = End;
        BestM--;
    }
    cout << Total;
    return 0;
}