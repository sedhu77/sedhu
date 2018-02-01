#include <stdio.h>
void main()
{
    int a,b=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    while(a!=0)
    {
    a /=10;
    ++b;
    }
    printf("The number of digits are %d",b);
}
