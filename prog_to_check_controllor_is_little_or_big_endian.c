/*program to check if the controllor is a little indian or big endian*/
#include <stdio.h>
#include <stdint.h>

int main() {
int a = 0x00;
a |= 0x01;
if(a>>7){
    printf("big_endian\n");
}
else{
    printf("little_endian\n");
}
}