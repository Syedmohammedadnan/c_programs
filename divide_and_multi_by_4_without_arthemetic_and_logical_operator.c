/*divide and multiply by 4 without using arthemetic and logical operators*/
#include <stdio.h>
#include <stdint.h>

int main() {
    int num1= 0,multi,divide;
    scanf("%d",&num1);

    divide = (num1 >> 2);
     multi = (num1 << 2);
    
    printf("multiplide by 4 =%d\n",multi);
    printf("divided by 4 =%d",divide);
}