#include<stdio.h>
int main(){
    int i,size,array[100],position;
    printf("Enter the range of an Array -> : ");
    scanf("%d",&size);
    printf("Enter the element of an Array  : \n");
    for(i=0;i<size;i++){
        printf("Array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("After traversing.. \n");
    for(i=0;i<size;i++)
        printf("%4d",array[i]);
    printf("\nEnter the position to Delete : ");
    scanf("%d",&position);
    for(i=position+1;i<size;i++)
        array[i-1]=array[i];
    size--;
    printf("After deleting.. \n");
    for(i=0;i<size;i++)
        printf("%4d",array[i]);
    return 0;
}