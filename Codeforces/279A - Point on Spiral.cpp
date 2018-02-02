//Solve Again
#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;

    if( y<=0 && x>=1+y && x<=1-y)
    {
    cout << (-y)*4;
    }
    else if(x>0 && y>=2-x && y<=x)
    {
        cout << x*4-3;
    }
    else if(y>0 && x>=-y && x<=y-1)
    {
        cout << y*4-2;
    }
    else if(x<0 && y>=x && y<=-1-x)
    {
        cout << (-x)*4-1;
    }
    else
    {
        cout << "0";
    }
    return 0;
}
