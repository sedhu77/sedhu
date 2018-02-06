#include <stdio.h>
void main()
{
    int i,p,c=1;
    printf("enter the number:");
    scanf("%d",&i);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        c=i*p;
        printf("%d",c);
    }
}
