#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,Start,End,Count=0,j;
    cin >> n;
    long long Arr[n];
    for(int i=0;i<n;++i) { cin >> Arr[i]; }
    for(int i=0;i+1<n;++i)
    {
        if(Arr[i]>Arr[i+1])
        {
            ++Count;
            Start = i+1;
            for(j=i;j+1<n;++j)
            {
                if(Arr[j]<Arr[j+1])
                {
                    break;
                }
            }
            End = j+1;
            i = End;
        }
    }
    if(Count==0)
    {
        cout << "yes\n1 1";
    }
    else if(Count==1)
    {
        reverse(Arr+Start-1,Arr+End);
        for(int i=0;i+1<n;i++)
        {
            if(Arr[i]>Arr[i+1])
            {
                cout << "no";
                return 0;
            }
        }
        cout << "yes\n" << Start << " " << End;
    }
    else
    {
        cout << "no";
    }
    return 0;
}
