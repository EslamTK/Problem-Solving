#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,Coun = 0,Coun2 = 0,j=0,T=0,Temp[5];
    cin >> n;
    int Arr[n];
    for(int i=0;i<n;++i) { cin >> Arr[i]; }
    for(int i=0;i<n;++i)
    {
        if (Arr[i]==0 || Arr[i] == 100)
        {
        Temp[j] = Arr[i];
        ++j;
        }
        else if (Arr[i]%10 == 0 && Coun==0)
        {
        Temp[j] = Arr[i];
        ++j;
        ++Coun;
        }
        else if (Arr[i]<10 && Coun2==0)
        {
          Temp[j] = Arr[i];
          ++j;
          ++Coun2;
        }
        else
        {
        T = Arr[i];
        }
    }
    if(Coun==0 && Coun2==0 && T!=0)
    {
        Temp[j] = T;
        ++j;
    }
    cout << j << endl;
    for(int i=0;i<j;++i)
    {
     cout << Temp[i] << " ";
    }
    return 0;
}
