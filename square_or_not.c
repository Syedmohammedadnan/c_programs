#include <stdio.h>

int square(int num){
    int result;
    for(int i=0; num < (i*i); i++){

        res = i*i;
        if(result==num){
            return 1;
        }
    }
    return 0;
}


int main()
{
    int num;
    bool rsult;
    printf("enter the num\n");
    scanf("%d",&num);

    result=square(num);
    if(result)
    printf("perfect square\n");
    else
    printf("not perfect\n");

    return 0;
}