#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    int i,b=0;
    printf("enter the special char:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='a')&&(s[i]>='z')||(s[i]>='0')&&(s[i]>='9'))
        {
            continue;
        }
        else
        {
            b++;
        }
    }
    printf("%d",b);
}
