#include <stdio.h>
#include <string.h>
//
// check if an is present before a word having its starting letter as vowel
// 
void gram_check(char a[]){
    int i=0;
    char c[20] ={};
    for(i = 1;a[i] != '\0';i++){
        if(a[i] == ' '){
            if((a[i+1]== 'a')||(a[i+1]=='e')||(a[i+1]=='i')||(a[i+1]=='o')||(a[i+1]=='u')){
                if((a[i-2] != 'n')&&(a[i-1] == 'a')){
                    strcpy(&c[0],&a[i]);
                    a[i-1] ='a';
                    a[i] ='n';
                    a[i+1] = ' ';
                    strcpy(&a[i+1],&c[0]);
                }
                
            }
            
        }

    } 
      printf("%s\n",a);
    
}
int main()
{

    gram_check(b);
}
