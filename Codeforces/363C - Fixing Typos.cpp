#include <iostream>
using namespace std;
int main()
{
    string x,Temp="";
    cin >> x;
    if(x.size()>2)
    {
        Temp += x[0];
        Temp += x[1];
        for(int i=2;i<x.size();++i)
        {
            if(!(x[i-2]==x[i] && x[i-1]==x[i])) Temp += x[i];
        }
        x = Temp;
        Temp = "";
        bool Check=1;
        for(int i=0;i+1<x.size();)
        {
            if(x[i]==x[i+1])
            {
                if(Check)
                {
                    Temp += x[i];
                    Temp += x[i+1];
                    Check = 0;
                }
                else
                {
                    Temp += x[i];
                    Check = 1;
                }
                i+=2;
            }
            else
            {
              Temp += x[i];
              Check = 1;
              ++i;
            }
        }
        if(Temp[Temp.size()-1]!=x[x.size()-1]) Temp += x[x.size()-1];
        cout << Temp;
    }
    else cout << x;
    return 0;
}
