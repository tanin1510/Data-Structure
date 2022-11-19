#include<stdio.h>
int recursive(int j,int k){
    if(j<k)
        return 5;
    else
        return recursive(j-k,k+2)+j;
}
int main(){
    int j,k;
    printf("Enter two values : ");
    scanf("%d %d",&j,&k);
    printf("For %d and %d is = %d",j,k,recursive(j,k));
}
/* Question was : 
   Q(j,k)={     5       , if(j<k)
           Q(j-k,k+2)+j , if(j>=k)  }                               
*/