#include<stdio.h>
int main()
{
int a,b,c=0,j;
scanf("%d",&a);
for(j=1;a>10;j++)
{
b=a%10;
c=c+b;
a=a/10;
}
c=c+1;
printf("%d",c);
return 0;
}
