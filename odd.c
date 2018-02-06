#include<stdio.h>
int main()
{
int i,j,k;
printf("Enter upper limit and lower limit:");
scanf("%d\t%d",&i,&j);
for(k=i+1;k<j;k++)
 {
 if(k%2!=0)
  {
  printf("%d\t",k);
  }
 }
return 0; 
}
