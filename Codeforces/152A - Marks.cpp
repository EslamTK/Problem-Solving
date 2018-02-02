#include <iostream>
using namespace std;
int main()
{
    short studentn,subjectsn,nsuccess=0;
    cin >> studentn >> subjectsn;
    string marks[studentn];
    short max[subjectsn];
    for (short i=0;i<studentn;i++)
    {
        cin >> marks[i];
    }
     for (short j=0; j<subjectsn;j++)
     {
        max[j]=0;
     }

    for (short i=0;i<subjectsn;i++)
    {
        for (short j=0;j<studentn;j++)
        {
            if ( marks[j][i]-'0' > max[i] )
            {
                max[i] = marks[j][i]-'0';
            }
        }
    }

    for (short i=0;i<studentn;i++)
    {
        for (short j=0;j<subjectsn;j++)
        {
            if (marks[i][j]-'0'>=max[j])
            {
                nsuccess++;
                break;
            }
        }
    }
    cout << nsuccess;
    return 0;
}
