#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int Seq[n];
    for(int i=0;i<n;i++) { cin >> Seq[i]; }
    for(int i=k;i<n;i++)
    {
        if(Seq[k-1]!=Seq[i])
        {
            cout << "-1";
            return 0;
        }
    }
    for(int i=k-2;i>=0;i--)
    {
        if(Seq[k-1]!=Seq[i])
        {
            cout << i+1;
            return 0;
        }
    }
    cout << "0";
    return 0;
}
