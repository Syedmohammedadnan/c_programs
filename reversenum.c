//
// cprogram to reverse given number
//


#include <stdio.h>
void main(){
    int num,rem,i=0,temp=0;
    printf("enter the num\n");
    scanf("%d",&num);
while(num>0){
    rem=num%10;
    temp=temp*10+rem;
    num=num/10;
}
    printf("%d",temp);
    
    
    
}

