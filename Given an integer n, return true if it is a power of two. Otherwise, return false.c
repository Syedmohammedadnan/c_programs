//Given an integer n, return true if it is a power of two. Otherwise, return false.
//An integer n is a power of two, if there exists an integer x such that n == 2x.
#include <stdio.h>

int bits_set(int a ){
    int i = 0,b = 0;
     for(i = 0; i< sizeof(int)*8; i++ ){
     if( ( (a>>i) & 0x01) == 1){
         b++;
         if (b>1){
            // More than 1 bits sets, its not a power of 2 no need to check further
            break;
         }
     }
 }
 return b;
}


int main() {

    // Write C code here
    int a,res = 0;

    printf("enter a number\n");
    scanf("%d",&a);

    res = bits_set( a);
     if (res == 1){
         printf("%d is a power of 2\n", a);
     }
     else printf("%d is not a power of 2\n", a);
}