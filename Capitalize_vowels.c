#include <stdio.h>
#include <string.h>


void capt_the_vowols(char a[]){
    int i=0;
    
       printf("%s\n",a);
    if((a[0]== 'a')||(a[0]=='e')||(a[0]=='i')||(a[0]=='o')||(a[0]=='u')){
                a[0] = (a[0]-32);
            }
       printf("%s\n",a);
    for(i = 0;a[i] != '\0';i++){
        if(a[i] == ' '){
            if((a[i-1]== 'a')||(a[i-1]=='e')||(a[i-1]=='i')||(a[i-1]=='o')||(a[i-1]=='u')){
                a[i-1] = (a[i-1]-32);
            }
            if((a[i+1]== 'a')||(a[i+1]=='e')||(a[i+1]=='i')||(a[i+1]=='o')||(a[i+1]=='u')){
                a[i+1] = (a[i+1]-32);
            }
            
        }
    } 
       printf("%s\n",a);
    
}
  
int main()
{

    char b[]="i ate a apple a apple";
	capt_the_vowols(b);

}
