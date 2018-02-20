#include<stdio.h>
#include<string.h>
void main()
{
    printf("enter any letter:");
	char a[100];int count=0;
	gets(a);
	while(a[count]!='\0')
	{
		count++;
	}
	a[count]='.';
	printf("%sasas",a);
	
}
