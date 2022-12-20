//
// cprogram to scan a number and bit position and set ,clear ,toggle,check if bit is set or not 
//


#include <stdio.h>
void main(){
    int num, pos, op;
    
    printf("enter the number\n");
    scanf("%d",&num);
    l1 :
    
    printf("enter the pos\n");
    scanf("%d",&pos);
    if(pos>=0 && pos<=31){
    
    printf("enter the option\n");
    printf("1)set_bit 2)clear_bit 3)toggle_bit \n");
    scanf("%d",&op);
    
    
    if(op==1){
        num = num | 1<< pos;
        printf("%d\n",num);
        for(int i=7; i>=0; i--)
        printf("%d",num>>i&1);
        
    }
    else if(op==2){
        num = num&~(1<<pos);
          printf("%d\n",num);
          for(int i=7; i>=0; i--)
        printf("%d",num>>i&1);
    }
    else if(op==3){
        num=num^1<<pos;
        printf("%d\n",num);
        for(int i=7; i>=0; i--)
        printf("%d",num>>i&1);
    }
    }

    else
    {
        printf("unknown option\n");
        goto l1;
    }
    
    
}

