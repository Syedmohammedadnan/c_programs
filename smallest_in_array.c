//
// smallest element in an array
//

#include<stdio.h>
void main()
{
    int s,a[5],i,ele;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array elements\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    s=a[0];
    
    for( i=1; i<ele; i++){
        if(a[i]<s)
        s=a[i];
    }
    printf("%d is smallest ele\n",s);
}
    
 