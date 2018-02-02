#include <iostream>
#include <cmath>
#include <map>
using namespace std;
int main()
{
    map <char,int> List;
    List.insert(make_pair('>',8));
    List.insert(make_pair('<',9));
    List.insert(make_pair('+',10));
    List.insert(make_pair('-',11));
    List.insert(make_pair('.',12));
    List.insert(make_pair(',',13));
    List.insert(make_pair('[',14));
    List.insert(make_pair(']',15));
    string E,Temp="";
    cin >> E;
    int Result = 0;
    for(int i=0;i<E.size();i++)
    {
        Result = (16*Result)+List[E[i]];
        Result %= 1000003;
    }
    cout << Result << endl;
    return 0;
}