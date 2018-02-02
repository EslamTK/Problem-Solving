#include <iostream>
using namespace std;
void PrintDaysTime(int Times[][2], int ArSize);
int main()
{
    int nDays,SumOfTimes,MinT,MaxT;
    cin >> nDays >> SumOfTimes;
    int DaysTimes[nDays][2];
    for(int i=0;i<nDays;i++)
    {
        cin >> MinT >> MaxT;
        DaysTimes[i][0] = MinT;
        DaysTimes[i][1] = MaxT - MinT;
        SumOfTimes -= MinT;
    }
    if(SumOfTimes<0)
    {
        cout << "NO";
        return 0;
    }
    else if(SumOfTimes==0)
    {
        cout << "YES" << endl;
        PrintDaysTime(DaysTimes,nDays-1);
        return 0;
    }
    else
    {
     for(int i=0;i<nDays;i++)
     {
         if(DaysTimes[i][1]<SumOfTimes)
         {
             DaysTimes[i][0] += DaysTimes[i][1];
             SumOfTimes -= DaysTimes[i][1];
         }
         else if (DaysTimes[i][0]>=SumOfTimes)
         {
             DaysTimes[i][0] += SumOfTimes;
             cout << "YES" << endl;
             PrintDaysTime(DaysTimes,nDays-1);
             return 0;
         }
     }
    }
    cout << "NO";
    return 0;
}
void PrintDaysTime(int Times[][2], int ArSize)
{
    for(int i=0;i<ArSize;i++)
    {
        cout << Times[i][0] << " ";
    }
        cout << Times[ArSize][0];
}
