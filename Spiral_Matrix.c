
//Spiral Matrix
//Given an m x n matrix, return all elements of the matrix in spiral order.

#include <stdio.h>

void main()
{
    int a[][7] = {1, 2, 3, 4, 5, 6, 7,
                 20,21,22,23,24,25, 8,
                 19,32,33,34,35,26, 9,
                 18,31,30,29,28,27,10,
                 17,16,15,14,13,12,11};
  int  i,row=0,col=0,row_max,col_max;
  
    row_max=sizeof(a)/sizeof(a[0]);
    col_max=sizeof(a[0])/sizeof(a[0][0]);
    
    printf("row= %d, col= %d\n", row_max, col_max);
    
    while((row<row_max) &&(col<col_max) )
    {
        for(i=col; i<col_max; i++){
            printf("%d ",a[row][i]);
        }
        row++;
        if(row == row_max)
        {
            break;
        }
        for(i=row; i<row_max; i++){
            printf("%d ",a[i][col_max-1]);
        }
        col_max--;
        if(col == col_max)
        {
            break;
        }
        for(i=col_max-1; i>=col; i--){
             printf("%d ",a[row_max-1][i]);
        }
        row_max--;
        if(row == row_max)
        {
            break;
        }
        for(i=row_max-1; i>=row; i--){
             printf("%d ",a[i][col]);
        }
        col++;
        if(col == col_max)
        { 
            break;
        }
    }
}