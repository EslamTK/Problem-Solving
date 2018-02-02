#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <set>
using namespace std;
set <long long> Numbers;
int main()
{
    string n,Temp = "";
    cin >> n;
    long long Num = atoll(n.c_str());
    long long x = atoll(n.c_str());
    for(int i=0;i<((n.size()+1)/2);++i) Temp += "47";

    sort(Temp.begin(),Temp.end());
    do
    {
    x = atoll(Temp.c_str());
    if(x>=Num) Numbers.insert(x);
    }while(next_permutation(Temp.begin(),Temp.end()));
    Temp += "47";
    sort(Temp.begin(),Temp.end());
    do
    {
    x = atoll(Temp.c_str());
    if(x>=Num) Numbers.insert(x);
    }while(next_permutation(Temp.begin(),Temp.end()));

    if(Numbers.find(Num)!=Numbers.end()) cout << Num;
    else
    {
      Numbers.insert(Num);
      cout << *(++Numbers.find(Num));
    }
    return 0;
}
