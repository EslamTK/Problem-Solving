#include <iostream>
using namespace std;
int main()
{
    string Draws[10] = {"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-",
                        "-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
    string Number;
    cin >> Number;
    for(int i=Number.size()-1;i>=0;i--)
    {
        cout << Draws[Number[i]-'0'] << endl;
    }
    return 0;
}
