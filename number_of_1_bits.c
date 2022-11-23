
//
//Number of 1 Bits
//Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

#include <stdio.h>

int count_bit(unsigned int num){
    int count=0;
    for(int i=((sizeof(unsigned int)*8)-1);i>=0; i--){
        if(num>>i&1){
            count++;
        }
    }
    return count;
}

void main()
{
    
int num,count;
printf("enter the num\n");
scanf("%d",&num);
count = count_bit(num);
for(int i=((sizeof(int)*8)-1); i>=0; i--)
printf("%d ",num>>i&1);
printf("\n");
printf("no of bits set = %d",count);

}