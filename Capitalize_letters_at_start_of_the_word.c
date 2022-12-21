#include <stdio.h>
#include <string.h>

void cap_start(char a[]){
   int i=0;
   if((a[0]>= 'a')&&(a[0]<='z')){
                a[0] = (a[0]-32);
            }
    for(i = 0;a[i] != '\0';i++){
        if(a[i] == ' '){
            if((a[i+1]>= 'a')&&(a[i+1]<='z')){
                a[i+1] = (a[i+1]-32);
            }
        }
    } 
       printf("%s\n",a);
}

int main()
{
    char a[20]="i bought a toy car";
    cap_start(a);

}
