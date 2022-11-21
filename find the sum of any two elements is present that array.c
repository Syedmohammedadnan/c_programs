/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

#include <stdio.h>
#include <stdint.h>
int i,j,len,num =6;
int a[]={3,3};
len = sizeof(a)/sizeof(a[0]);
//=========================================
int find(int num){
for(i = 0; i< len; i++){
    for(j=1; j< len;j++){
            if(a[i]+a[j] == num){
                return 1;
            }
        }
    }
    return 0;
}
//=========================================

int main() {
    int result = find(num); 
    if(result){
        printf("[%d,%d]",i,j);
    }
        else{
            printf("no numbers found for that value\n");
        }
}