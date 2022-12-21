include <stdio.h>
#include <string.h>
void fun1(char *arr,int len,int comb){
    for(int main_index = 0;main_index<len;main_index++){
        for(int char_indx = 0;char_indx<comb;char_indx++){
            printf("%c",arr[main_index+char_indx]);
        }
        printf(" ");
    }
}
int main()
{
    char arr[] = {"space"};
    int len = (strlen(arr));
    
    for (int comb = 0;comb<len;comb++){
      fun1(arr,len-comb,comb+1); 
      printf(" \n");
    }
    return 0;
}