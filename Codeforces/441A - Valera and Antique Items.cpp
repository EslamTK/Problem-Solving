#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> Vec;
    int n,v,s,sv;
    cin >> n >> v;
    bool Check;
    for (int i=1;i<=n;i++)
    {
        cin >> s;
        Check = 0;
        for(int j=0;j<s;j++)
        {
            cin >> sv;
            if(sv<v)
            {
                Check = 1;
            }
        }
        if(Check)
        {
            Vec.push_back(i);
        }
    }
    if(Vec.size()<1)
    {
        cout << "0" << endl;
    }
    else
    {
        sort(Vec.begin(),Vec.end());
        cout << Vec.size() << endl;
        for(int i=0;i<Vec.size();i++)
        {
            cout << Vec[i];
            if (i+1<Vec.size())
            {
                cout << " ";
            }
        }
    }
    return 0;
}
