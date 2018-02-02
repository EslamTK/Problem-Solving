#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <string> Vec;
    int k;
    cin >> k;
    string x,Temp;
    cin >> x;
    --k;
    bool Found = 0;
    for(int i=0;i<x.size();++i)
    {
     Found = 0;
     for(int j=0;j<Vec.size();++j)
     {
         if(Vec[j][0]==x[i])
         {
             Found = 1;
             break;
         }
     }
     if(Found)
     {
         Vec[Vec.size()-1] += x[i];
     }
     else
     {
         if(Vec.size()==k)
         {
            cout << "YES" << endl;
            for(int j=0;j<Vec.size();++j)
            {
              cout << Vec[j] << endl;
            }
            for(int j=i;j<x.size();++j)
            {
                cout << x[j];
            }
            return 0;
         }
         Temp = x[i];
         Vec.push_back(Temp);
     }
    }
    cout << "NO";
    return 0;
}
