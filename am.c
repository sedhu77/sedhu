#include<stdio.h>
int main()
{
int n,m,i,j,k;
printf("enter the values:");
scanf("%d %d",&n,&m);
for(i=n;i<m;i++)
{
int p=i,sum=0;
for(j=0;p!=0;j++)
     {
      k=p%10;
      sum=sum+k*k*k;
      p=p/10;
     
     }
     if(sum==i)
     printf("%d\n",sum);

}
}
