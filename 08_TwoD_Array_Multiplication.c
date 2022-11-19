#include<stdio.h>
int main(){
    int i,j,k,Row,Column,a[100][100],row,column,b[100][100],mul[100][100];
    printf("Enter the Range of 1st Row --> : ");
    scanf("%d",&Row);
    printf("Enter the Range of 1st Column  : ");
    scanf("%d",&Column);
    printf("Enter the element of Array --> : \n");
    for(i=0;i<Row;i++){
        for(j=0;j<Column;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("After Traversing : \n");
    for(i=0;i<Row;i++){
        for(j=0;j<Column;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the range of 2nd Row ------> : ");
    scanf("%d",&row);
    printf("Enter the Range of 2nd Column ---> : ");
    scanf("%d",&column);
    printf("Enter the element of 2nd Array --> : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("After Traversing : \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    printf("After Multiplication ---> \n");
    if(Column==row){
        for(i=0;i<Row;i++){
            for(j=0;j<column;j++){
                mul[i][j]=0;
                for(k=0;k<Column;k++){
                    mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
                }
            }
        }
    }
    else
        printf("\nMultiplication is impossible.");
    for(i=0;i<Row;i++){
        for(j=0;j<column;j++){
            printf("%4d",mul[i][j]);
        }
        printf("\n");
    }
}