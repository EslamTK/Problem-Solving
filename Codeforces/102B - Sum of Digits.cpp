#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string x;
    int temp=0;
    cin >> x;
    int sum=0;
    while(x.size()>1)
    {
        for(int i=0;i<x.size();i++)
        {
        temp += x[i]-'0';
        }
        stringstream ss;
        ss << temp;
        x = ss.str();
        temp = 0;
        sum++;
    }
    cout << sum;
    return 0;
}
