#include<stdio.h>
int main()
{
    char s[50],i,b=0;
    printf("enter the word:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
    if(s[i]>='a' && s[i]<='z')
    {
        b++;
    }
    }
    printf("%d",b);
    
}
