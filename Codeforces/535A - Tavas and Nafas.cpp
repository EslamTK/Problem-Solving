#include <iostream>

using namespace std;
int main()
{
    string numbers[28] = {"zero","one","two","three","four","five","six","seven","eight",
                          "nine","ten","eleven","twelve","thirteen","fourteen","fifteen",
                          "sixteen","seventeen","eighteen","nineteen","twenty","thirty",
                          "forty","fifty","sixty","seventy","eighty","ninety"};
    string x;
    cin >> x;
    if(x.size()==1)
    {
        cout << numbers[x[0]-'0'];
    }
    else if(x[0]=='1')
    {
     cout << numbers[(x[1]-'0')+10];
    }
    else if(x[1]=='0')
    {
    cout << numbers[(x[0]-'0')+18];
    }
    else
    {
    cout << numbers[(x[0]-'0')+18] << "-" << numbers[x[1]-'0'];
    }
    return 0;
}
