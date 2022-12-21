/////////////////////////////////////////////////////////////////////////
///////////////// captilize the first letter of word in a sentence///////
///////////////// captilize all the small lettter in the sentence////////
//////////////////////////////////////////////////////////////////////////
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

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
void cap_small(char a[]){
    int i=0;
    for(i = 0;a[i] != '\0';i++){
        //if(a[i] == ' '){
            if((a[i+1]>= 'a')&&(a[i+1]<='z')){
                a[i+1] = (a[i+1]-32);
            }
        //}
    }
    printf("%s\n",a);
}

int main()
{
    char a[20]="i bought a toy car";
    cap_start(a);
    cap_small(a);
}