#include<stdio.h>
int main(){
    int length,index;
    printf("Enter the Array Length : ");
    scanf("%d",&length);
    int Array[length];
    printf("Enter the Array elements : \n");
    index=0;
    while(index<length){
        scanf("%d",&Array[index]);
        index=index+1;     //use i=i+1 prohabited i++ or use ++i
    }
    printf("After Traversing : \n");
    index=0;
    while(index<length){
        printf("%d ",Array[index]);
        index=index+1;
    }
    return 0;
}