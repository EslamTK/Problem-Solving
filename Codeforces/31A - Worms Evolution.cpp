#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Worms[n];
    for(int i=0;i<n;++i) { cin >> Worms[i]; }

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            for(int k=0;k<n;++k)
            {
            if(i!=j && i!=k && j!=k)
            {
            if(Worms[i]==(Worms[j]+Worms[k]))
            {
                cout << i+1 << " " << j+1 << " " << k+1;
                return 0;
            }
            }
            }
        }
    }
    cout << "-1";
    return 0;
}
