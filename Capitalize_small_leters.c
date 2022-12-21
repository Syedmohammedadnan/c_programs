#include <stdio.h>
#include <string.h>


void cap_small(char a[]){
    int i=0;
    for(i = 0;a[i] != '\0';i++){
        
            if((a[i+1]>= 'a')&&(a[i+1]<='z')){
                a[i+1] = (a[i+1]-32);
            }
        
    }
    printf("%s\n",a);
}

int main()
{

    char b[]="i ate a apple a apple";

    cap_small(a);

}
