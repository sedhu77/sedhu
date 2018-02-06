#include<stdio.h>
int main()
{
int n,r=0,sum;
printf("Enter the number:\n",n);
scanf("%d",&n);
sum=n;
while(sum!=0)
{
r=r*10;
r=r+sum%10;
sum=sum/10;
}
if(n==r)
{
printf("The number  is polindrome!!\n",n);
}
else
printf("The number is not polindrome!!\n",n);
return 0;
}
