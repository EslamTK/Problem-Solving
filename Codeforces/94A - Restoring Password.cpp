#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Pass,Out="",Temp="",Numbres[10];
    cin >> Pass;
    int Start = 0;
    for(int i=0;i<10;i++)
    {
        cin >> Numbres[i];
    }
    while(Start<80)
    {
        Temp = Pass.substr(Start,10);
        Start += 10;
        for(int i=0;i<10;i++)
        {
        if(Temp==Numbres[i])
        {
            cout << i;
            break;
        }
        }
    }
    return 0;
}
