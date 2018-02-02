#include <iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    for(int i=0;i+1<x.size();++i)
    {
       if(x.substr(i,2)=="AB")
       {
           for(int j=i+2;j+1<x.size();++j)
           {
               if(x.substr(j,2)=="BA")
               {
                   cout << "YES";
                   return 0;
               }
           }
           break;
       }
    }
    for(int i=0;i+1<x.size();++i)
    {
       if(x.substr(i,2)=="BA")
       {
           for(int j=i+2;j+1<x.size();++j)
           {
               if(x.substr(j,2)=="AB")
               {
                   cout << "YES";
                   return 0;
               }
           }
           break;
       }
    }
    cout << "NO";
    return 0;
}
