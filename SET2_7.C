#include<stdio.h>
#include<conio.h> 
void main() {     int m,s=0,r,t;     clrscr();     printf("Enter a three digit number");     scanf("%d",&m);     t=m;     while(m>0)    {              r=m%10;      s=s+(r*r*r);      m=m/10;    }                  if(s==t)             printf("\n %d is an armstrong number",t);             else               printf("\n %d is not an armstrong number",t);  getch(); }
