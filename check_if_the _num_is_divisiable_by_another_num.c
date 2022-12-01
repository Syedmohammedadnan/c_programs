#include <stdio.h>
int divisiable(int num,int diviser){
    if(num % diviser){
        return 0;
    } 
    else{
        return 1;
    }
}

int main()
{
    int check,diviser;
    int num;
    printf("enter the input number\n");
    scanf("%d",&num);
    printf("enter the value for diviser\n");
    scanf("%d",&diviser);    
    check = divisiable(num,diviser);
    if(check){
    printf("true\n");
    }
    else{
        printf("false\n");
    }
    return 0;
}