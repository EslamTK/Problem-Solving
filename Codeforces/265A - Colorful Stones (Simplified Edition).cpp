#include <iostream>
using namespace std;
int main()
{
    string S,T;
    cin >> S >> T;
    int Pos = 0;
    for(int i=0;i<T.size();i++)
    {
        if(S[Pos]==T[i])
        {
            ++Pos;
        }
    }
    cout << Pos+1;
    return 0;
}
