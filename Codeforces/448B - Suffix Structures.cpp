#include <iostream>
#include <string>
using namespace std;
int main()
{
    bool Check = 0;
    int Found = 0;
    string s,t,Temp;
    cin >> s >> t;
    Temp = s;
    for(int i=0;i<t.size();++i)
    {
        Found = Temp.find_first_of(t[i],Found);
        if(Found==-1)
        {
           Found = Temp.find_first_of(t[i]);
           if(Found==-1)
           {
               cout << "need tree";
               return 0;
           }
           else
           {
             Check = 1;
             Temp.erase(Found,1);
           }
        }
        else
        {
            Temp.erase(Found,1);
        }
    }
    if(s.size()>t.size() && !Check)
    {
        cout << "automaton";
    }
    else if(s.size()==t.size())
    {
        cout << "array";
    }
    else
    {
        cout << "both";
    }
    return 0;
}
