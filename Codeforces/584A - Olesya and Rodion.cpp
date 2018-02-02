#include <iostream>
#include <map>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
  int n,d;
  cin >> n >> d;
  if(n==1 && d==10)
  {
      cout << "-1";
      return 0;
  }
 if(d!=10)
 {
  while(n--)
  {
      cout << d;
  }
 }
 else
 {
  cout << "1";
  --n;
     while(n--)
  {
      cout << "0";
  }
 }
    return 0;
}
