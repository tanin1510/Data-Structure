#include<stdio.h>
int main(){
    int i,j,row,column,array[100][100];
    printf("Enter the Range of 1st Row --> : ");
    scanf("%d",&row);
    printf("Enter the Range of 1st Column  : ");
    scanf("%d",&column);
    printf("Enter the element of Array --> : ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("After Traversing : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%4d",array[i][j]);
        }
        printf("\n");
    }
}