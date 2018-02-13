#include <stdio.h>
void main()
{
    int a,i;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d\n",a*i);
    }
}

