#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    if(num & 0x01)
    {
        printf("odd\n");
    }
    else
    {
        printf("even\n");
    }
    
}