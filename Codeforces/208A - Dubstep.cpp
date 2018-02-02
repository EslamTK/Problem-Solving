#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Mix;
    cin >> Mix;
    int x=0;
    for(;;)
    {
        x = Mix.find_first_of('W',x);
        if(x!=-1)
        {
            if(Mix[x+1]=='U' && Mix[x+2]=='B')
            {
            if(x!=0)
            {
            if(Mix[x-1]!=' ')
            {
            Mix.replace(x,3," ");
            }
            else
            {
                Mix.erase(x,3);
            }
            }
            else
            {
                Mix.erase(x,3);
            }
            }
            else
            {
                x++;
            }
        }
        else
        {
            break;
        }
    }
    cout << Mix;
    return 0;
}
