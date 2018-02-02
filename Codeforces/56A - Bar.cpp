#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    string CoholList[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN",
                        "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    string x;
    int n,Res=0;
    cin >> n;
    while(n>0)
    {
        cin >> x;
        if(x.size()>4)
        {
        if(binary_search(CoholList,CoholList+11,x))
                {
                    ++Res;
                }
        }
        else
        {
            bool Check = 1;
            for(int i=0;i<x.size();i++)
            {
                if(isalpha(x[i]))
                {
                    Check = 0;
                }
            }
            if(Check)
            {
                int Age = 0;
                stringstream ss;
                ss << x;
                ss >> Age;
                if(Age<18)
                {
                    ++Res;
                }
            }
            else
            {
                if(binary_search(CoholList,CoholList+11,x))
                {
                    ++Res;
                }
            }
        }
        --n;
    }
    cout << Res;
    return 0;
}
