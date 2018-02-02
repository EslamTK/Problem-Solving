#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string Members[n][2];
    for(int i=0;i<n;i++) { cin >> Members[i][0] >> Members[i][1]; }

    for(int i=0;i<n;i++)
    {
        if(Members[i][1]=="rat")
        {
            cout << Members[i][0] << endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(Members[i][1]=="woman" || Members[i][1]=="child")
        {
            cout << Members[i][0] << endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(Members[i][1]=="man")
        {
            cout << Members[i][0] << endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(Members[i][1]=="captain")
        {
            cout << Members[i][0] << endl;
        }
    }
    return 0;
}
