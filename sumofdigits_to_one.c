//
// cprogram to find the sum of digits until single digits
//


#include <stdio.h>
void main(){
    int num,rem,temp,sum,digit=0;
    printf("enter the num\n");
    scanf("%d",&num);
    
    do{
        sum=0;
        while(num>0){
            rem=num%10;
            sum=sum+rem;
            num=num/10;
            
        }
        printf("%d ",sum);
        num=sum;
    }while(num/10!=0);
    
    
}

