#include <iostream>
using namespace std;
int main()
{
    short n;
    cin >> n;
    for (int i=0,j=0;i<=n;i++)
    {
        for (int s=0;s<n*2-j;s++)
        {
            cout << " ";
        }
        for (int incre=0;incre<i;incre++)
        {
            cout << incre << " ";
        }
        cout << i;
        for (int decre=i-1;decre>=0;decre--)
        {
            cout << " " <<decre;
        }
        cout << endl;
        j += 2;
    }
    for (int i=n-1,j=2;i>=0;i--)
    {
        for (int s=0;s<j;s++)
        {
            cout << " ";
        }
        for (int incre=0;incre<i;incre++)
        {
            cout << incre << " ";
        }
        cout << i;
        for (int decre=i-1;decre>=0;decre--)
        {
            cout << " " <<decre;
        }
        cout << endl;
        j += 2;
    }
    return 0;
}