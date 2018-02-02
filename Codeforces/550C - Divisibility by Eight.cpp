#include <iostream>
using namespace std;
int main()
{
    string Number;
    cin >> Number;
    int Temp,Temp1;
    for(int i=0;i<Number.size();++i)
    {
        if(Number[i]=='0' || Number[i]=='8')
        {
            cout << "YES" << endl << Number[i];
            return 0;
        }
        for(int j=i+1;j<Number.size();++j)
        {
            Temp = ((Number[i]-'0')*10) + (Number[j]-'0');
            if(Temp%8==0)
            {
                cout << "YES" << endl << Temp;
                return 0;
            }
            for(int k=j+1;k<Number.size();++k)
            {
                Temp1 = Temp*10 + (Number[k]-'0');
                if(Temp1%8==0)
                {
                cout << "YES" << endl << Temp1;
                return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
