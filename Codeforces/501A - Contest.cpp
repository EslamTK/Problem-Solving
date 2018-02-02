#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
int a,b,c,d;
cin >> a >> b >> c >> d;

int player1 = max(3*a/10,a-a/250*c);
int player2 = max(3*b/10,b-b/250*d);
if (player1>player2)
{
    cout << "Misha";
}
else if (player2>player1)
{
    cout << "Vasya";
}
else
{
    cout << "Tie";
}
    return 0;
}
