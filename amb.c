#include<stdio.h>
int main()
{
    int a,b,c=0,d=0;
    printf("enter the three number:");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=a%10;
        b=b+c;
        a=a%10;
    }
    if(d==a)
        printf("%d is an Armstrong number.",a);
    else
        printf("%d is not an Armstrong number.",a);

    return 0;
}
