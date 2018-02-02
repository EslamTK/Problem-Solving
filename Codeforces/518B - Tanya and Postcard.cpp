#include <iostream>
#include <string>
using namespace std;
int main()
{
int YAY=0,OPS=0,Diff1=0,Diff2=0;
int S[52]={0},T[52]={0};
string orginal,news;
cin >> orginal >> news;
for(int i=0;i<orginal.size();++i)
{
    if(islower(orginal[i])) ++S[int(orginal[i])-71];
    else ++S[int(orginal[i])-65];
}
for(int i=0;i<news.size();++i)
{
    if(islower(news[i])) ++T[int(news[i])-71];
    else ++T[int(news[i])-65];
}
for(int i=0;i<52;++i)
{
    if(T[i]>=S[i])
    {
        YAY += S[i];
        T[i] -= S[i];
        S[i] = 0;
    }
    else
    {
        Diff1 = S[i] - T[i];
        YAY += T[i];
        S[i] -= T[i];
        T[i] = 0;
        if(i<26)
        {
            if(T[i+26]>=S[i+26])
            {
                Diff2 = T[i+26] - S[i+26];
                if(Diff2>=Diff1)
                {
                    OPS += Diff1;
                    T[i+26] -= Diff1;
                    S[i] -= Diff1;
                }
                else
                {
                   OPS += Diff2;
                   T[i+26] -= Diff2;
                   S[i] -= Diff2;
                }
            }
        }
        else
        {
        if(T[i-26]>=S[i-26])
            {
                Diff2 = T[i-26] - S[i-26];
                if(Diff2>=Diff1)
                {
                    OPS += Diff1;
                    T[i-26] -= Diff1;
                    S[i] -= Diff1;
                }
                else
                {
                   OPS += Diff2;
                   T[i-26] -= Diff2;
                   S[i] -= Diff2;
                }
            }
        }
    }
}

    cout << YAY << " " << OPS;
    return 0;
}
