#include <iostream>

using namespace std;

int main()
{
   short nseries,numbers,neven=0,nodd=0,evenp,oddp,x=1;
   cin >>nseries;
   while (nseries>=x)
   {
       cin >> numbers;
       if (numbers%2==0)
       {
           neven++;
           evenp = x;
       }

       else
       { nodd++;
         oddp = x; }

    x++;
   }
   if (neven > nodd)
   {
       cout << oddp;
   }
   else
    cout << evenp;
    return 0;
}
