
#include<stdio.h>
void main()
{
    int a,i,n;
    printf("enter the values:");
    scanf("%d",&n);
    a=n;
    for(i=1;i<n;i++)
    {
        a=a*i;
        printf("%d",a);
    }
}
