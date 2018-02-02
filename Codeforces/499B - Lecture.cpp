#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector <string> lang1;
vector <string> lang2;
int LecSize,DicSize;
string temp1,temp2;
cin >> LecSize >> DicSize;
string Lecture[LecSize];
while (DicSize>0)
{
    cin >> temp1 >> temp2;
    if (temp1.size() > temp2.size())
    {
        lang1.push_back(temp1);
        lang2.push_back(temp2);
    }
DicSize--;
}
for (int i=0;i<LecSize;i++)
{
    cin >> Lecture[i];
}
int siz = lang1.size();
for (int i=0;i<siz;i++)
{
    for (int j=0;j<LecSize;j++)
    {
        if (Lecture[j]==lang1[i])
        {
            Lecture[j] = lang2[i];
        }
    }
}
for (int i=0;i<LecSize;i++)
{
    cout << Lecture[i] << " ";
}
    return 0;
}