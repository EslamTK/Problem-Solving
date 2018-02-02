#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;
vector <long long> LuckyNumbers;
inline void LuckyListCreator();
int main()
{
    long long n;
    cin >> n;
    LuckyListCreator();
    for(int i=0;i<LuckyNumbers.size();++i)
    {
        if(LuckyNumbers[i]==n)
        {
            cout << i+1;
            return 0;
        }
    }
    return 0;
}
inline void LuckyListCreator()
{
    string n = "",Temp;
    for(int i=0;i<9;++i)
    {
        n += '4';
        Temp = n;
        LuckyNumbers.push_back(atoll(Temp.c_str()));
        for(int j=Temp.size()-1;j>=0;--j)
        {
            Temp[j] = '7';
            do
            {
            LuckyNumbers.push_back(atoll(Temp.c_str()));
            }while(next_permutation(Temp.begin(),Temp.end()));
        }
    }
    sort(LuckyNumbers.begin(),LuckyNumbers.end());
}
