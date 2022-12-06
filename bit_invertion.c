
#include <stdio.h>

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("the inverted number is = ");
    for(int i = 7;i>=0;i--){
        printf("%d",((num>>i)^1)&0x01);
    }
    return 0;
}