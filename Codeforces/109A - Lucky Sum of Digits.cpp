#include <iostream>
using namespace std;
int main()
{
  int number=0,n7=0,n4=0,temp=0,check=0,result=0,in7=0,ar[2]={0,0};
  cin >>number;
  for (int i=0;in7<=number;i++)
  {
      in7 = i * 7;
      temp = number - in7;
      if (temp%4==0 && temp>=0)
      {
          n7 = i;
          n4 = temp/4;
          result = n7 + n4;
          if (check==0)
          {
              check = result;
              ar[0] = n4;
              ar[1] = n7;
          }
          if (result<check)
         {
          ar[0] = n4;
          ar[1] = n7;
         }
      }
  }
  if (ar[0]==0 && ar[1]==0)
  {
      cout << "-1";
  }
  while(ar[0]>0)
  {
      cout << "4";
  ar[0]--;
  }
  while(ar[1]>0)
  {
      cout << "7";
      ar[1]--;
  }
    return 0;
}
