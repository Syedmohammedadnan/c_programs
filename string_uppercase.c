//
// string into uppercase
//

#include<stdio.h>
void main()
{
    char s[10];
    printf("enter the string\n");
    scanf("%s",s);
    
    for(int i=0; s[i]; i++){
        if(s[i]>='a'&& s[i]<='z')
        s[i]=s[i]-32;
    }
    printf("%s",s);
}