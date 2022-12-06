// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here

int a[3][4]={0,1,1,0,
             1,1,1,1,
             1,1,1,1};
int b[3][4]={0,1,1,0,
             1,1,1,1,
             1,1,1,1};
int i,j,k;

for (i = 0;i<3;i++){
    for(j = 0;j<4;j++){
        if(b[i][j] == 0){
            for(k=0;k<4;k++){
                a[i][k] = 0;
            }
            for(k=0;k<3;k++){
                a[k][j] = 0;
            }
        }
    }
}

printf("the modified matrix is\n");
for (i = 0;i<3;i++){
    for(j = 0;j<4;j++){
    printf("%d",a[i][j]);
    }
    printf("\n");
    }
}