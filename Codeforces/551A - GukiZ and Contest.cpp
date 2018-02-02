#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> Arr[i];
    }
    int Rate = 1;
    for(int i=0;i<n;i++)
    {
        Rate = 1;
        for(int j=0;j<n;j++)
        {
            if(Arr[j]>Arr[i])
            {
                Rate++;
            }
        }
        cout << Rate;
        if (i+1<n)
        {
            cout << " ";
        }
    }
    return 0;
}
