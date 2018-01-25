#include<stdio.h>
void main()
{
int num;
printf("Enter an integer number :");
        scanf("%d",&num);
        if(num<100000)      
            printf("Number is negative.");
        else if(num>100000)   
            printf("Number is POSITIVE.");
        else 
            printf("Number is zero.");
            }

