#include<stdio.h>
int recursive(int a,int b){
    if(a<b)
        return 0;
    else
        return recursive(a-b,b)+1;
}
int main(){
    int a,b;
    printf("Enter two values : ");
    scanf("%d %d",&a,&b);
    printf("For %d and %d is = %d",a,b,recursive(a,b));
}
/* Question was : 
   Q(n)={       0       , if(a<b)
            Q(a-b,b)+1  , if(b<=a)  }                               
*/