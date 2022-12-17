//
//R is 5 bits,g is 6 bits,b is 5 bits
//
#include <stdio.h>
#include <stdlib.h>

int conversion(int num){
    int temp;
    
    temp = ((num>>11) & 0x1F) << 19;
    temp |= ((num>>5) & 0X3F) << 10;
    temp |= ((num & 0x1F)<<3);
    
    return temp;
    

}

int main(int argc, char *argv[])
{
    int round_off_num,round_off_value;
    int num;

    printf("enter the input number\n");
    scanf("%x",&num);

    round_off_num=conversion(num);
    printf("the packed number is = %x",round_off_num);
    return 0;
}