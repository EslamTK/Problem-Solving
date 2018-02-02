#include <iostream>
using namespace std;
int main()
{
    char Trump;
    string FirstCard,SecondCard;
    cin >> Trump >> FirstCard >> SecondCard;
    if(FirstCard[1]==Trump && SecondCard[1]!=Trump)
    {
        cout << "YES";
    }
    else if(FirstCard[1]==SecondCard[1])
    {
        int A,B;
        char Rankes[] = {'6','7','8','9','T','J','Q','K','A'};
        for(int i=0;i<9;++i)
        {
            if(Rankes[i]==FirstCard[0])
            {
                A = i;
            }
            else if(Rankes[i]==SecondCard[0])
            {
                B = i;
            }
        }
        if(A>B)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
    cout << "NO";
    }
    return 0;
}
