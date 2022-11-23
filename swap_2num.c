//swap two variables without using extra variables

#include<stdio.h>
void main()
{
 int i,j;
 printf("enter the number\n");
 scanf("%d",&i);
 scanf("%d",&j);
 i=i^j;
 j=i^j;
 i=i^j;
 printf("%d %d",i,j);
}