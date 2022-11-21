/*check if the given input is a palindrome*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int check_palindrome(char *str)
{
    int n = strlen(str);
    int res = 1;

    for( int i = 0 ; i < n/2; i++)
    {
        if( str[i] != str[n-1-i])
        {
            res = 0;
            break;
        }
    }
    return res;
}

int main() {
    unsigned short num = 0x82, res, n=8;
    
    char palindrome[] = "cabcdefggfedcbac";
    
    
    res = check_palindrome(palindrome);
    if(res)
    {
        printf("\n%s is a palindrome", palindrome);
    }
    else
    {
        printf("\n%s is not a palindrome", palindrome);
    }
    
}