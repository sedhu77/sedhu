#include <stdio.h>
 void main()
{
    int a,b, c;
    printf("Enter the values of a,b and c\n");

    scanf("%d %d %d",a, &b,&c);
    printf("a= %d\tb = %d\c = %d\n", a, b, c);
    if (a>b)
    {
        if (a>c)
        {
            printf("A is the greatest among three \n");
        }
        else
        {
            printf("C is the greatest among three \n");
        }
    }
    else if (b > c)
        printf("B is the greatest among three \n");
    else
        printf("C is the greatest among three \n");
}
