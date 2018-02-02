#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N,ABC[3],Max=0;
    cin >> N >> ABC[0] >> ABC[1] >> ABC[2];
    sort(ABC,ABC+3);
    for(int i=0;i*ABC[0]<=N;i++)
    {
    for(int j=0;i*ABC[0]+j*ABC[1]<=N;j++)
    {
        if((N-i*ABC[0]-j*ABC[1])%ABC[2]==0)
        {
        if(i+j+(N-i*ABC[0]-j*ABC[1])/ABC[2]>Max)
        Max=i+j+(N-i*ABC[0]-j*ABC[1])/ABC[2];
        }
    }
    }
    cout << Max;
    return 0;
}
