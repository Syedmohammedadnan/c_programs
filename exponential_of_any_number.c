#include <stdio.h>

int exponent(int num,int power){
    int val = 1;
    for(int i = 1 ; i<=power;i++)
    {
        val = val * num;
    }
    return val;
}

int main()
{
    int check,diviser;
    int num,power,result=0;
    printf("enter the input number\n");
    scanf("%d",&num);
    printf("enter the power\n");
    scanf("%d",&power);
    result = exponent(num,power);
    
    printf("the result is = %d ",result);
    return 0;
}