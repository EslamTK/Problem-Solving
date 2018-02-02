#include <iostream>
#include <stdio.h>
#include <cmath>
#include <set>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    set <int> Done;
    int n;
    cin >> n;
    string S;
    cin >> S;
    for(int i=n/2-1;i>=0;--i)
    {
        for(int j=n/2;j<n;++j)
        {
            if(abs(i-j)>1)
            {
                if(Done.find(i)==Done.end() && Done.find(j)==Done.end())
                {
                    if(S[i]=='R' && S[j]=='L')
                    {
                        cout << j+1 << " " << i+1 << endl;
                    }
                    else
                    {
                        cout << i+1 << " " << j+1 << endl;
                    }
                    Done.insert(i);
                    Done.insert(j);
                    break;
                }
            }
        }
    }
    return 0;
}
