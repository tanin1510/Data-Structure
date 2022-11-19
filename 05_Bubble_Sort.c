#include<stdio.h>
int main (){
    int i,size,array[100],pass,comp,temp;
    printf("Enter the size of Array --> : ");
    scanf("%d",&size);
    printf("Enter the Element of Array  : \n");
    for(i=0;i<size;i++){
        printf("Array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("Before sorting.. : \n");
    for(i=0;i<size;i++)
        printf("%4d",array[i]);
    for (pass=size-1;pass>=0;pass--)
        for(comp=0;comp<pass;comp++)
            if(array[comp]>array[comp+1]){
                temp=array[comp];
                array[comp]=array[comp+1];
                array[comp+1]=temp;
            }
    printf("\nAfter sorting.. : \n");
    for(i=0;i<size;i++)
        printf("%4d",array[i]);
    return 0;
}