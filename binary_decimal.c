//
// cprogram to convert binary to decimal
//


#include <stdio.h>
void main(){
    int num,rem,temp,dec=0,j=1;
    printf("enter binary num\n");
    scanf("%d",&num);
    
    while(num>0){
        rem=num%10;
        temp=rem*j;
        dec=dec+temp;
        j=j*2;
        num=num/10;
    }
printf("%d ",dec);
}

