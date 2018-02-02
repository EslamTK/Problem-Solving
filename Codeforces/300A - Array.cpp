#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> V1;
    vector <int> V2;
    vector <int> V3;
    int n,x;
    cin >> n;
    while(n>0)
    {
        cin >> x;
        if(x<0)
        {
            V1.push_back(x);        }
        else if(x>0)
        {
            V2.push_back(x);
        }
        else
        {
            V3.push_back(x);
        }
        --n;
    }
    if(V2.size()==0 && V1.size()>2)
    {
        V2.push_back(V1[V1.size()-1]);
        V1.pop_back();
        V2.push_back(V1[V1.size()-1]);
        V1.pop_back();
    }
    if(V1.size()%2==0)
    {
        V3.push_back(V1[V1.size()-1]);
        V1.pop_back();
    }
    cout << V1.size() << " ";
    for(int i=0;i<V1.size();i++)
    {
        cout << V1[i];
        if(i+1<V1.size())
        {
            cout << " ";
        }
    }
    cout << endl << V2.size() << " ";
    for(int i=0;i<V2.size();i++)
    {
        cout << V2[i];
        if(i+1<V2.size())
        {
            cout << " ";
        }
    }
    cout << endl << V3.size() << " ";
    for(int i=0;i<V3.size();i++)
    {
        cout << V3[i];
        if(i+1<V3.size())
        {
            cout << " ";
        }
    }
    return 0;
}
