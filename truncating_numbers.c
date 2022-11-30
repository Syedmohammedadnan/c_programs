/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int truncate(int num,int round_off){
    int temp;
    
    if(num < round_off){
        return round_off;    
    }
    
    else{
        temp = (num % round_off);
        if(temp < (round_off/2)){
        return (num - temp);
        }
        else{
            return (num +(round_off-temp));
        }
    }
    
}
int main()
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
