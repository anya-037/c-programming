#include <stdio.h>
int main(){
    int rows,columns;
    printf("Enter the value for rows and columns:\n");
    scanf("%d %d",&rows,&columns);
    int matrix[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter the element: ");
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The multidimensional array is:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}