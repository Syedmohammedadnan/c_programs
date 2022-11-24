#include <stdio.h>
#include <stdlib.h>
static int roman_to_integer(char c)
{
    switch(c) {
    case 'I':  
        return 1;  
    case 'V':  
        return 5;  
    case 'X':  
        return 10;  
    case 'L':  
        return 50;  
    case 'C':  
        return 100;  
    case 'D':  
        return 500;  
    case 'M':  
        return 1000;  
    default:
        return 0;
    }
}

int main(void)
 {
  char *str1 = "XIV";
  int i, int_num = 0; 
  int_num = roman_to_integer(str1[0]);
  
    printf("Original Roman number: %s", str1);
    for (i = 1; str1[i] != '\0'; i++) {
        int prev_num = roman_to_integer(str1[i - 1]);
        int cur_num = roman_to_integer(str1[i]);
        
        if (prev_num < cur_num) {
            int_num = int_num - prev_num + (cur_num - prev_num);
        } else {
            int_num += cur_num;
        }
    }
    printf("\nRoman to integer: %d", int_num);
    return 0;
}