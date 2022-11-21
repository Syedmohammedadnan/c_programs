//to find the large and seclarg num in an array 


#include<stdio.h>
void main()
{
int a[5]={100,30,20,59,79},i,large,slarge,ele;
ele=sizeof(a)/sizeof(a[0]);
large = a[0];
slarge = a[1];
if(large<slarge)
{
large=a[1];
slarge=a[0];
}
for(i=2; i<ele; i++)
{
    if(a[i]>large){
       slarge=large;
       large=a[i];
    }
    else if (a[i]>slarge)
    slarge=a[i];
         
}
printf("large=%d slarge=%d ",large,slarge);


}