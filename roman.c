#include<stdio.h>
#include<string.h>

int main(void)
{	
	int a=0,n,m,i;
	char roman[9];
	scanf("%s",roman);
	m=strlen(roman);
	for(i=0;i<m;i++)
	{
	switch (roman[i])
      {
     case 'I':  
            roman[i] = 1;
            break;
     case 'V': 
            roman[i] = 5;
            break;
     case 'X': 
            roman[i] = 10;
            break;
     case 'L': 
            roman[i] = 50;
            break;
     case 'C':  
            roman[i] = 100;
            break;
     case 'D': 
            roman[i] =  500;
            break;
	 }
}
for(i=0;i<m;i=i+2)
{
		if(roman[i]<roman[i+1])
		{
			n=roman[i+1]-roman[i];
		}
		else
		{
			n=roman[i+1]+roman[i];
		}
		a=n+a;
}
printf("%d",a);
return 0;
}

