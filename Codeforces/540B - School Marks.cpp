#include <iostream>
using namespace std;
int main()
{
    int nTests,kPassed,MaxMark,TotalMarks,Median;
    cin >> nTests >> kPassed >> MaxMark >> TotalMarks >> Median;
    int Req_N_Tests = nTests - kPassed,SumOfPassed=0,Mcoun=0,x;
    int Markes[Req_N_Tests];
    for (int i=0;i<kPassed;i++)
    {
        cin >> x;
        SumOfPassed += x;
        if(x>=Median)
        {
            Mcoun++;
        }
    }
    x = 0;
    while((Mcoun+x)<=(nTests/2))
    {
        ++x;;
    }
    if( Req_N_Tests>=x && (x*Median+(Req_N_Tests-x)+SumOfPassed)<=TotalMarks )
    {
        while(x--)
        {
            cout << Median << " ";
            --Req_N_Tests;
        }
        while(Req_N_Tests--)
        {
            cout << "1" << " ";
        }
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
