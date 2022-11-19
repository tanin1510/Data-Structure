#include<stdio.h>
int main(){
    int length,index,position,value;
    printf("Enter the Array Length : ");
    scanf("%d",&length);
    int Array[length];
    printf("Enter the Array elements : \n");
    for(index=0;index<length;i++){
        scanf("%d",&Array[index]);
    }
    printf("Enter the position want to add : ");
    scanf("%d",&position);
    for(index=length-1;index>=position;index--){
        Array[index+1]=Array[index];
    }
    printf("Enter the inserting value : ");
    scanf("%d",&Array[position]);
    for(index=0;index<=length;index++){
        printf("%d ",Array[index]);
    }
    return 0;
}