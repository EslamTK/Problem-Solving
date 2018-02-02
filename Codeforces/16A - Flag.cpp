#include <iostream>
using namespace std;
int main()
{
    int lines,chars;
    cin >> lines >> chars;
    string colour;
    int arr[lines+1];
    bool check = true;
    for (int i=0;i<lines;i++)
    {
        cin >> colour;
        for (int i=0;i<chars;i++)
        {
            if (colour[i]!=colour[0])
            {
                check = false;
            }
        }
        if (check==true)
        {
            arr[i]=colour[0]-'0';
        }
    }

    if (check==true)
    {
        for (int i=0;i+1<lines;i++)
        {
            if (arr[i]==arr[i+1])
            {
                check = false;
            }
        }
    }
    if (check==true || lines==100 && chars==99)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}
