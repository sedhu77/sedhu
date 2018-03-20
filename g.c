#include<stdio.h>
void main()
{
    int a[10],i,n,max=a[0];
    printf("enter the value n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }
    }
    printf("%d",max);
}
