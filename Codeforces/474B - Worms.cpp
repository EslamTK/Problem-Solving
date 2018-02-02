#include <iostream>
using namespace std;
int BinarSearch(int key,int Arr[],int lower,int Upper);
int n;
int main()
{
    int m,x,a=1;
    cin >> n;
    int Arr[n];
    for(int i=0;i<n;++i)
    {
        Arr[i] = a;
        cin >> x;
        a += x;
    }
    cin >> m;
    while(m--)
    {
        cin >> x;
        cout << BinarSearch(x,Arr,0,n) << endl;
    }
    return 0;
}
int BinarSearch(int key,int Arr[],int lower,int Upper)
{
    int Mid = (lower+Upper)/2;
    if( Arr[Mid]==key || (Arr[Mid]<key && Arr[Mid+1]>key && Mid+1<n) || (Mid==n-1 && Arr[Mid]<key) ) return Mid+1;
    if(Arr[Mid]>key) return BinarSearch(key,Arr,lower,Mid-1);
    return BinarSearch(key,Arr,Mid+1,Upper);
}
