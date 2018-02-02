#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Holds[n];
    for(int i=0;i<n;i++)
    {
        cin >> Holds[i];
    }
    int Temp = 0,Min = 0,Min2 = 0;
    for(int i=1;i+1<n;i++)
    {
        Min = 0;
        for (int j=0;j+1<n;j++)
        {
            if(j+1==i)
            {
                Temp = Holds[j+2] - Holds[j];
                j++;
            }
            else
            {
                Temp = Holds[j+1] - Holds[j];
            }
            if(Temp>Min)
            {
                Min = Temp;
            }
        }
        if(i==1)
        {
            Min2 = Min;
        }
        else if(Min<Min2)
        {
            Min2 = Min;
        }
    }
    cout << Min2;
    return 0;
}
