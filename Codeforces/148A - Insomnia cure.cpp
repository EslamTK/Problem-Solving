#include <stdio.h>

int main()
{
   int k,l,m,n,d,index=0;
   scanf("%i %i %i %i %i",&k,&l,&m,&n,&d);
   for (int i=d;i>0;i--)
   {
       if (i%k==0 || i%l==0 || i%m==0 || i%n==0)
       {
           index++;
       }
   }
   printf("%i",index);
return 0;
}
