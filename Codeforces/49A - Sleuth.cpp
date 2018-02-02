#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    for(int i=x.size()-1;i>=0;--i)
    {
        if(isalpha(x[i]))
        {
            x[i] = tolower(x[i]);
            if(x[i]=='a' || x[i]=='e' || x[i]=='u' || x[i]=='i' || x[i]=='y' || x[i]=='o')
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
            return 0;
        }
    }
    return 0;
}
