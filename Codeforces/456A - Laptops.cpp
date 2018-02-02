#include <iostream>
#include <map>
using namespace std;
int main()
{
    map <int,int> Laptop;
    map <int,int>::iterator it;
    int n,a,b;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        Laptop.insert(make_pair(a,b));
    }
     it=Laptop.begin();
     int i=it->second,j=0;
     for (;it!=Laptop.end();++it)
     {
         j = it->second;
         if (i>j)
         {
            cout << "Happy Alex";
            return 0;
         }
         else
         {
             i = j;
         }
     }
    cout << "Poor Alex";
    return 0;
}
