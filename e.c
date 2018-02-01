#include<stdio.h>
void main()
{
int i,j,n,k,sum=0;
printf("\n enter the integers values");
scanf("%d%d",&n ,&k);
for(j=1,j<n,j++)
{
printf("\n",j);
}
for(i=1,i<k,i++)
{
sum=sum+i;
}
printf("\nThe sum of integers is%d",sum);
getch();
}
