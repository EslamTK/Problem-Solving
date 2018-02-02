#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int A,B,R;
    scanf("%i %i %i",&A,&B,&R);
    if((2*R)>min(A,B))
    {
        printf("Second");
    }
    else
    {
        printf("First");
    }
    return 0;
}
