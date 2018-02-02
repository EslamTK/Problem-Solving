#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    long long n,res=0;
    string Temp="";
    cin >> n;
    for(;;)
    {
        string Temp="";
        stringstream ss;
        ss << n;
        ss >> Temp;
        if(res>0)
        {
        for(int i=0;i<Temp.size();i++)
        {
            if(Temp[i]=='8')
            {
                cout << res;
                return 0;
            }
        }
        }
        ++n;
        ++res;
    }
    return 0;
}
