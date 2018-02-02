#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
long nElements,Temp;
cin >> nElements;
multiset <long> Set1;
multiset <long> Set2;
multiset <long> Set3;
for (int i=0;i<nElements;i++)
{
    cin >> Temp;
    Set1.insert(Temp);
}
for (int i=0;i<nElements-1;i++)
{
    cin >> Temp;
    Set2.insert(Temp);
}
set_difference(Set1.begin(),Set1.end(),Set2.begin(),Set2.end(),&Temp);
cout << Temp << endl;
for (int i=0;i<nElements-2;i++)
{
    cin >> Temp;
    Set3.insert(Temp);
}
set_difference(Set2.begin(),Set2.end(),Set3.begin(),Set3.end(),&Temp);
cout << Temp << endl;
return 0;
}
