#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <char> Uniq;
    string x;
    getline(cin,x);
    int Siz = x.size();
    if(Siz>2)
    {
    for(int i=1;i<Siz;i+=3)
    {
        Uniq.insert(x[i]);
    }
    }
    cout << Uniq.size();
    return 0;
}
