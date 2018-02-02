#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int Correct[n],Wrong[m];
    for(int i=0;i<n;i++){cin >> Correct[i];}
    for(int i=0;i<m;i++){cin >> Wrong[i];}
    int Result = max(*max_element(Correct,Correct+n),2*(*min_element(Correct,Correct+n)));
    if(Result<*(min_element(Wrong,Wrong+m)))
    {
        cout << Result;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
