
#include <stdio.h>
int fun1(int num){
    int r,g,b;
     
    b = (num & 0xFF);
    g = ((num>> 8) & 0xFF);
    r = ((num>>16) & 0xFF);
    
    printf("r = 0x%x \n",r);
    printf("g = 0x%x \n",g);
    printf("b = 0x%x \n",b);
    
    r = (r>>3);//remove 3 bits for 5bit pack from behind
    printf("r = 0x%x\n",r);
    g = (g>>3);//remove 3 bits for 5bit pack from behind
    printf("g = 0x%x \n",g);
    b = (b>>2);//remove 2 bits for 6bit pack from behind
    printf("b = 0x%x \n",b);
    num =0;
    num |= (r<<11);// shift 11 bits before pack
    printf("num = 0x%x\n",num);
    num |= (g<<6);// shift 6 bits  before pack
    printf("num = 0x%x\n",num);
    num |= b;
    
    return num;
}
int main()
{
    int num = 0X102030;
    //printf("enter the number\n");
    //scanf("%d",&num);
    num=fun1(num);
    printf("the packed number is 0x%x",num);
    return 0;
}
