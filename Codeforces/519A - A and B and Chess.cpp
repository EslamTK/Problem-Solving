#include <iostream>
using namespace std;
int main()
{
string x;
int white=0,black=0;
for (int i=0;i<8;i++)
{
    cin >> x;
    for (int j=0;j<8;j++)
    {
            if(x[j] =='q')
                black+=9;
            else if(x[j] =='r')
                black+=5;
            else if(x[j] =='b')
                black+=3;
            else if(x[j] =='n')
                black+=3;
            else if(x[j] =='p')
                black+=1;
            else if(x[j] =='Q')
                white+=9;
            else if(x[j] =='R')
                white+=5;
            else if(x[j] =='B')
                white+=3;
            else if(x[j] =='N')
                white+=3;
            else if(x[j] =='P')
                white+=1;
    }
}
if (white>black)
{
    cout <<"White";
}
else if (white<black)
{
    cout <<"Black";
}
else
    cout <<"Draw";
    return 0;
}
