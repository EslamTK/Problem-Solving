#include <iostream>
using namespace std;
int main()
{
    int TestCases,nStudent,sNumbers[3]={0};
    int Result=0;
    cin >> TestCases;
    for (int i=0;i<TestCases;i++)
    {
        cin >> nStudent;

        if (nStudent==1)
        {
            sNumbers[0]++;
        }
        else if (nStudent==3)
        {
            sNumbers[2]++;
        }

        else if (nStudent==2)
        {
            sNumbers[1]++;
            if (sNumbers[1]==2)
            {
                Result++;
                sNumbers[1]=0;
            }
        }
        else
        {
            Result++;
        }
    }
    if (sNumbers[1]==1)
    {
        Result++;
        sNumbers[1]=0;
        if (sNumbers[0]>1)
        {
        sNumbers[0]-=2;
        }
        else if (sNumbers[0]==1)
        {
        sNumbers[0]-=1;
        }
    }
    while (sNumbers[2]>0)
    {
    Result++;
    sNumbers[2]--;
    if (sNumbers[0]>0)
    {
    sNumbers[0]--;
    }
    }
    while (sNumbers[0]>0)
    {
       Result++;
       sNumbers[0] -= 4;
    }
    cout << Result;
    return 0;
}
