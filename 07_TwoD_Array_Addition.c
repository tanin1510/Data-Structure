#include<stdio.h>
int main(){
    int i,j,Row,Column,a[100][100],row,column,b[100][100],sum[100][100];
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
    printf("After Addition ---> \n");
    if(Column==row){
        for(i=0;i<Row;i++){
            for(j=0;j<column;j++){
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    else
        printf("\nAddition is impossible.");
    for(i=0;i<Row;i++){
        for(j=0;j<column;j++){
            printf("%4d",sum[i][j]);
        }
        printf("\n");
    }
}