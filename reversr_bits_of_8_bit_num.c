/*reverse the bits of a 8 bit number*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>



int main() {
    unsigned short num = 0x82, res, n=8;
    
    for(int i = 0; i < n ; i++){
        res <<= 1;
        res |= ((num >> i ) & 1);
    }

    printf("Number = ");
    for( int i = 0 ; i < n ; i++)
    {
        printf("%d", num >> (n-1-i) & 1);
    }
    printf(" Reverse = ", res);
    for( int i = 0 ; i < n ; i++)
    {
        printf("%d", res >> (n-1-i) & 1);
    }
    
}