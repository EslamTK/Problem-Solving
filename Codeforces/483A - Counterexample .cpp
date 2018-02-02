#include <iostream>
using namespace std;
int main()
{
    unsigned long long L,R;
    cin >> L >> R;
        if (L%2!=0)
        {
            L++;
        }

        if(L+2>R)
        {
            cout << "-1";
        }
        else
        {
            cout << L << " " << L+1 << " " << L+2;
        }
    return 0;
}
