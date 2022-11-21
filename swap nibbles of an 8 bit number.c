/*swap nibbbles of a 8 bit number*/
#include <stdio.h>
#include <stdint.h>

int main() {
    int num = 0;
    scanf("%x", &num);
    
    num = (num << 4 & 0xF0) | (num >> 4 & 0x0F);
    printf("0x%X", num);
}