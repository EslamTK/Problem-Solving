#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    if(N>=0)
    {
        cout << N;
    }
    else
    {
    string Number;
    stringstream ss;
    ss << N;
    ss >> Number;
    if(int (Number[Number.size()-1])>=int (Number[Number.size()-2]))
    {
        Number.erase(Number.size()-1,1);
    }
    else
    {
         Number.erase(Number.size()-2,1);
    }
    if(Number.size()==2 && Number[1]=='0')
    {
        cout << "0";
    }
    else
    {
    cout << Number;
    }
    }
    return 0;
}
