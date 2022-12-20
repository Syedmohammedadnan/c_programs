#include <stdio.h>

int main()
{
    int a[]={22,12,7,24,11,6};
    int lar = a[0],sec_lar = 0;
    

    for(int i = 1;i<(sizeof(a)/sizeof(a[0]));i++){
        if(a[i]>lar){
            sec_lar = lar;
            lar = a[i];
        }
        if(lar > a[i]) {
            if(a[i]>sec_lar){
            sec_lar = a[i];
            }
        }
    }
    printf("the second largest is %d\n",sec_lar);
    printf("the largest is %d\n",lar);
}