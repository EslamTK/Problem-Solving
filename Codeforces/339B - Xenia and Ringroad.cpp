#include <iostream>
using namespace std;
int main()
{
    int n,m;
    long long Time=0;;
    cin >> n >> m;
    int Tasks[m];
    for(int i=0;i<m;++i) { cin >> Tasks[i]; }
    for(int i=0;i<m;++i)
    {
        if(i==0)
        {
            Time += Tasks[i] - 1;
        }
        else
        {
            if(Tasks[i-1]<=Tasks[i])
            {
                Time += Tasks[i] - Tasks[i-1];
            }
            else
            {
                Time += (n-Tasks[i-1]) + Tasks[i];
            }
        }
    }
    cout << Time;
    return 0;
}
