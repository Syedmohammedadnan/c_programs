// program to find the duplicate element in an array

#include<stdio.h>
void main()
{
    int i,j,ele;
    int a[]={3,3,4,4,2};
    ele=sizeof(a)/sizeof(a[0]);
    
    for(i=0; i<ele; i++){
        for(j=i+1;j<ele;j++)
        {
            if(a[i]==a[j]){
            
            
            printf("%d",a[i]);
            break;
            }
        }
    }
    
}