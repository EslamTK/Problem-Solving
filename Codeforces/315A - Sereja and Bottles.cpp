#include <iostream>
using namespace std;
int main()
{
    int n,result=0;
    bool Found;
    cin >> n;
    int bot[n][2];
    for(int i=0;i<n;i++) { cin >> bot[i][0] >> bot[i][1]; }
    for(int i=0;i<n;i++)
    {
    Found = false;
      for(int j=0;j<n;j++)
      {
          if(i!=j)
          {
              if(bot[i][0]==bot[j][1])
              {
                  Found = true;
              }
          }
      }
      if(!Found)
      {
          ++result;
      }
    }
    cout << result;
    return 0;
}
