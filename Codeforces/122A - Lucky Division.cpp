#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
   int number,check=0;
   cin >> number;
   for (int i=1;i<=number;i++)
   {
    stringstream ss;
    ss << i;
    string temp = ss.str();
    int c=0,j=0;
    while (temp[j]=='7' || temp[j]=='4')
    {
        c++;
        j++;
    }
    if (c==temp.size())
    {
       if (number%i==0)
       {
           cout << "YES";
           check = 1;
           break;
       }
   }
}

   if (check==0)
   {
       cout << "NO";
   }
    return 0;
}
