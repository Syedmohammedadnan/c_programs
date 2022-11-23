//to sum of a digits in a single statement 

#include<stdio.h>
void main()
{
       int num,sum=0,rem; 

    printf("enter the number\n");
    scanf("%d",&num);
  
    while(num)
    {
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    }
    printf("%d",sum);
 
}