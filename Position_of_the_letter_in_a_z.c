
#include <stdio.h>

int main()
{
    char a = 0;
    
    printf("enter an alphebet from a to z\n");
    scanf("%c",&a);
    //printf("the decimial value is %d\n",a);
    if((a>='A') && (a <='Z')){
        printf("the position is %d\n",((a-'A')+1));
    }
    else if((a>='a') && (a <= 'z')){
        printf("the position of is %d\n",((a-'a')+1));
    }
    return 0;
}
