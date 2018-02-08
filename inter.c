#include<stdio.h>
int main()
{
int i,a,b;
//printf("enter the numbers a,b:");
scanf("%d %d", &a, &b);
//printf("a&b is",a,b);
for(i=a;i<=b;i++)
{
if(i%2==0)
printf("%d",i);
//else
  // continue;
}
}
