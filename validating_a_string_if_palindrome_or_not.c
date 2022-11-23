
// A phrase is a palindrome if,
// after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
// it reads the same forward and backward.
// Alphanumeric characters include letters and numbers.

#include <stdio.h>
#include <string.h>
int change(char *a, int size_a) {
    int shifts = 0,  k = 0, comparisons=0;
    for( int i = 0 ; i < size_a-k ; ) {
        a[i] = a[i+k];
        shifts++;
        if((a[i] >='A' && a[i] <= 'Z') || (a[i] >='a' && a[i] <= 'z') || (a[i] >='0' && a[i] <= '9')){
            // change to lower case
            if(a[i] >='A' && a[i] <= 'Z'){
                a[i] = a[i]+32; 
            }
            comparisons+=8;
            i++;
        }
        else
        {
            k++;
        }
    }
    // Null terminate the shorted string
    a[size_a-k] = 0;
    shifts++;
    printf("%d Comparisons\n", comparisons);
    return shifts;
}

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
    int shifts,res;
    char a[]={"race a car"};
    int size_a = strlen(a);

    shifts = change( a, size_a );
    printf("The refined string is \"%s\" after %d shifts\n", a, shifts);
    
    res = check_palindrome(a);
    if(res)
    {
        printf("\n%s is a palindrome", a);
    }
    else
    {
        printf("\n%s is not a palindrome", a);
    }

}