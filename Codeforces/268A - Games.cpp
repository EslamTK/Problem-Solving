#include <iostream>
using namespace std;
int main()
{
    int N,Total=0;
    cin >> N;
    int Home[N],Guest[N];
    for(int i=0;i<N;i++)
    {
        cin >> Home[i] >> Guest[i];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(Home[i]==Guest[j])
            {
                Total++;
            }
        }
    }
    cout << Total;
    return 0;
}
