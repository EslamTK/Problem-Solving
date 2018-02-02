#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int Points[4][2];
    cin >> Points[0][0] >> Points[0][1] >> Points[1][0] >> Points[1][1];
    if (Points[0][0] == Points[1][0])
    {
        int K = max(Points[0][1],Points[1][1]) - min(Points[0][1],Points[1][1]);
        Points[2][0] = Points[0][0] + K;
        Points[2][1] = Points[0][1];
        Points[3][0] = Points[1][0] + K;
        Points[3][1] = Points[1][1];
    }
    else if(Points[0][1] == Points[1][1])
    {
        int K = max(Points[0][0],Points[1][0]) - min(Points[0][0],Points[1][0]);
        Points[2][0] = Points[0][0];
        Points[2][1] = Points[0][1] + K;
        Points[3][0] = Points[1][0];
        Points[3][1] = Points[1][1] + K;
    }
    else if( abs(Points[0][0]-Points[1][0]) != abs(Points[0][1]-Points[1][1]) )
    {
        cout << "-1";
        return 0;
    }
    else
    {
        Points[2][0] = Points[0][0];
        Points[2][1] = Points[1][1];
        Points[3][0] = Points[1][0];
        Points[3][1] = Points[0][1];
    }
    cout << Points[2][0] << " " << Points[2][1] << " " << Points[3][0] << " " <<
    Points[3][1];
    return 0;
}
