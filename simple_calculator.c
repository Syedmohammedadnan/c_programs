
#include <stdio.h>

int main()
{
    char s = 0;
    int a = 0,b = 0;    
    printf("enter the equation\n");
    scanf("%d %c %d",&a,&s,&b);
    //printf("the decimial value is %d\n",a);
    if(s == '+')printf("the sum is = %d\n",(a+b));
    else if(s == '-')printf("the difference is = %d\n",(a-b));
    else if(s == '*')printf("the product is = %d\n",(a*b));
    else if(s == '/')printf("the div result is = %d\n",(a/b));
    else if(s == '%')printf("the mod value is = %d\n",(a%b));
    else printf("entered a wrong expresion\n");
    return 0;
}
