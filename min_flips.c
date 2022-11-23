// 
// cprogram to find Minimum Flips to Make a OR b Equal to c
 
#include <stdio.h>

int main()
{
  int a=4, b=2, c=7, i, count=0;
  
  for(i=3; i>=0; i--){
      if((c>>i&1)==1)
      {
  
              if(((a>>i&1)==0)&&((b>>i&1)==0)){
              count++;
          }
      }
      else{
      if((a>>i&1)==1)
      count++;
      if((b>>i&1)==1)
      count++;
          
      }
  }
  printf("%d",count);
}