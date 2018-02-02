#include <stdio.h>
using namespace std;
int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    if(h==23 && m>32)
    {
        printf("00:00");
        return 0;
    }
    m++;
    for(;h<24;h++)
    {
        for(;m<60;m++)
        {
            if(h%10*10+h/10==m)
            {
                printf("%02d:%02d",h,m);
                return 0;
            }
        }
        m = 0;
    }
    return 0;
}
