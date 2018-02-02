#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int Max = 0;
bool check = false;
int isValid(string x,string y,string z)
{
    if ( ((x[0]!='0' && x.size()>1) || x.size()==1) &&
         ((y[0]!='0' && y.size()>1) || y.size()==1) &&
         ((z[0]!='0' && z.size()>1) || z.size()==1) &&
          (x.size()<=7 && y.size()<=7 && z.size()<=7)
        )
    {
    int part1=atoi(x.c_str()),part2=atoi(y.c_str()),part3=atoi(z.c_str());
    if (part1<=1000000 && part2<=1000000 && part3<=1000000)
    {
     int temp = part1+part2+part3;
     if (temp>=Max)
     {
         check = true;
         Max = temp;
         return Max;
     }
    }
    }
}
int main()
{
     string x,part1,part2,part3;
     cin >> x;
     int siz = x.size();
     for(int i=1;i<siz;i++)
     {
     for(int j=1;j+i<siz;j++)
        {
            part1 = x.substr(0, i);
            part2 = x.substr(i, j);
            part3 = x.substr(i+j, x.size());
            isValid(part1,part2,part3);
        }
     }
    if (check)
    {
    cout << Max;
    }
    else
    {
    cout << "-1";
    }
    return 0;
}
