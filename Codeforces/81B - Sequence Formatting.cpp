#include <iostream>
#include <string>
using namespace std;
int main()
{
string text;
getline(cin,text);
string output ="";
string temp ="";
int siz = text.size();
for (int i=0;i<siz;i++)
{
if (text[i]!=' ')
{
    temp += text[i];
}
else if (text[i]==' ' && text[i-1]!=' ' && i>0)
{
   temp += ' ';
}
}
siz = temp.size();
for (int i=0;i<siz;i++)
{
if (temp[i]==',')
{
    output += temp[i];
    if (i<siz-1 )
    {
    output += ' ';
    }
}
else if (temp[i]=='.')
{
    if (i>0 && output[output.size()-1]!=' ')
    {
    output += ' ';
    }
    output += "...";
    i += 2;
}
else if (temp[i]!=' ')
{
 while (temp[i]!=' ' && temp[i]!=',' && temp[i]!='.' && i<siz)
 {
     output += temp[i];
     i++;
 }
 if (temp[i]!=',' && temp[i]!='.' && temp[i+1]!=',' && temp[i+1]!='.' && i+1<siz)
 {
     output += ' ';
 }
 i--;
}
}
cout << output;
    return 0;
}