#include <iostream>

using namespace std;
int main()
{
int ignore;
cin >> ignore;
int arr[27]={0};
string Text;
cin >> Text;
int coun = 0;
int siz = Text.size();
for (int i=0;i<siz;)
{
    arr[int(Text[i])-97]++;
    i++;
    if (arr[int(Text[i])-65]>0)
    {
        arr[int(Text[i])-65]--;
    }
    else
    {
    coun++;
    }
    i++;
}
cout << coun;
return 0;
}
