
// c program to count number of bits is set and toggle the bits 

#include <stdio.h>

int count_bitset(int num){
   int count=0;
    for(int i=7;i>=0;i--)
    if((num>>i&1)==1){
        count++;
    }
    return count;
}



int main()
{
    int num,r,toggle;
    printf("enter the num\n");
    scanf("%d",&num);
    ////////////////////////////////////////
    printf("binary of %d = ",num);
    for(int i=7;i>=0;i--)
    printf("%d",num>>i&1);
    printf("\n");
    ////////////////////////////////////////
    r=count_bitset(num);
    printf("total count of bits set = %d\n",r);
    ////////////////////////////////////////////
    
    //toggle bits
     
     printf("toggle of %d = ",num);
     for(int i=7;i>=0;i--)
     printf("%d", (((num >> i) ^ 1) & 0x01));
    return 0;
}