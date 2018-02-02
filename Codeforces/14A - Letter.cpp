#include <iostream>
#include <string>
using namespace std;
int main()
{
short nlines,nchars,start=0,z=0,last=0,i=0,j=0,max1=0,max2=0,beg=0,en=0,temp=0;
cin >> nlines >> nchars;
bool check = false;
string* output =  new string [nlines];
for (i=0;i<nlines;i++)
{
         cin >> output[i];
        start = output[i].find_first_of("*");
        last = output[i].find_last_of("*");
        if ( start>=0 && last>=0 && check==false )
        {
            max1 = start;
            max2= last;
            check = true;
        }
        if (start < max1 && start>=0)
        {
            max1 = start;
        }
        if (last > max2)
        {
            max2 = last;
        }
        z++;
}

for (j=0;j<z;j++)
{
temp = output[j].find_first_of("*");
if (temp>=0)
{
    beg = j;
    break;
}
}

for (j=z-1;j>0;j--)
{

temp = output[j].find_last_of("*");
if (temp>=0)
{
    en = j;
    break;
}

}

for (j=beg;j<=en;j++)
{
for (i=max1;i<=max2;i++)
 {
 cout << output[j][i];
 }
 cout << endl;
}

    return 0;
}