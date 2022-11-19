#include<stdio.h>
int main(){
    int length;
    printf("Enter the Array Length : ");
    scanf("%d",&length);
    int Array[length];
    printf("Enter the Array elements : \n");
    for(int i=0;i<length;i++){
        scanf("%d",&Array[i]);
    }
    printf("After Traversing : \n");
    for(int i=0;i<length;i++){
        printf("%d ",Array[i]);
    }
    return 0;
}
//Traversing means processing each element of an Array at least once
//Traversing happens when getting input by using scanf() for each 
//Array element or happens when we printing Array of each element.