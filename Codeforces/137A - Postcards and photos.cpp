#include <iostream>

using namespace std;

int main()
{
    string x;
    cin >>x;
    int y=0,z=0;
    while (y<x.size())
    {
        int n1=0,n2=0;
        while (x[y]=='P')
        {
            n1++;
            y++;
        }
        while(n1>=5)
        {
            z++;
            n1-=5;
        }
        if (n1<5 && n1>0)
            {z++;}

        while (x[y]=='C')
        {
            n2++;
            y++;
        }

        while(n2>=5)
        {
            z++;
            n2-=5;
        }

      if (n2<5 && n2>0)
        {z++;}
    }
    cout << z;
    return 0;
}
