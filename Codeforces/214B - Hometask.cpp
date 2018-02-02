#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n,Sum=0;
    cin >> n;
    vector <int> Digits(n);
    for(int i=0;i<n;++i)
    {
        cin >> Digits[i];
        Sum += Digits[i];
    }
    sort(Digits.rbegin(),Digits.rend());
    if(Digits[n-1]!=0) cout << "-1";
    else
    {
        int Mod=Sum%3;
        if(Mod!=0)
        {
         bool Fixed = 0;
         for(int i=n-1;i>=0;--i)
         {
             if(Digits[i]%3==Mod)
             {
                Digits.erase(Digits.begin()+i);
                Fixed = 1;
                --n;
                break;
             }
         }
         if(!Fixed)
         {
             bool Used[10] = {0};
             Used[0] = 1;
             for(int i=n-1;i>=0;--i)
             {
                 if(!Used[Digits[i]] && !Fixed)
                 {
                     Used[Digits[i]] = 1;
                     for(int j=i-1;j>=0;--j)
                     {
                         if((Digits[i]+Digits[j])%3==Mod)
                         {
                          Digits.erase(Digits.begin()+i);
                          Digits.erase(Digits.begin()+j);
                          Fixed = 1;
                          n -= 2;
                          break;
                         }
                     }
                 }
             }
         }
        }
        if(Digits[0]!=0)
        {
            for(int i=0;i<n;++i) cout << Digits[i];
        }
        else cout << "0";
    }
    return 0;
}
