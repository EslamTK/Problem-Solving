#include <stdio.h>
#include <algorithm>
int main()
{
    int a,b,c,n,t=0;
    scanf("%i %i %i",&a,&b,&c);
while (c>0)
{

 if ( t==0 && c>0)
 {
 n =std::__gcd(a,c);
 c -=n;
 if (c>0)
 {
 t=1;
 }
 }
if ( t==1 && c>0 )
 {
 n =std::__gcd(b,c);
 c -=n;
 if (c>0)
 {
 t=0;
 }
 }

}
printf("%i",t);
  return 0;
}
