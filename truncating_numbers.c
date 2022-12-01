
#include <stdio.h>
#include <stdlib.h>

int truncate(int num,int round_off){
    int temp;
    
    num += round_off/2;
    num = num - num%round_off;
    return num;
    

}

int main(int argc, char *argv[])
{
    int round_off_num,round_off_value;
    int num;

    printf("enter the input number\n");
    scanf("%d",&num);
    printf("enter hte value to be round off to in terms of 100,1000,10000...\n");
    scanf("%d",&round_off_value);    

    round_off_num=truncate(num,round_off_value);
    printf("the nearest thousand is = %d",round_off_num);
    return 0;
}
