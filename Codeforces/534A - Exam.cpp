#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >>x;
    if(x==1 || x==2)
    {
        cout << "1" << endl;
        cout << "1";
    }
    else if (x==3)
    {
        cout << "2" << endl;
        cout << "1" << " " << "3";
    }
    else
    {
        cout << x << endl;
        int odd,even;
        if(x%2==0)
        {
        even = x;
        odd = x-1;
        }
        else
        {
        odd = x;
        even = x-1;
        }
        for(int i=odd;i>=1;)
        {
            cout << i << " ";
            i -= 2;
        }
        for(int i=even;i>=2;)
        {
            cout << i << " ";
            i -= 2;
        }
    }
    return 0;
}
