#include<stdio.h>
int factorial(int value){
    if(value==0)
        return 1;
    else
        return value*factorial(value-1);
}
int main(){
    int value;
    printf("Enter an integer value -----> : ");
    scanf("%d",&value);
    printf("Factorial value of %d is ---> : %d",value,factorial(value));
}

//12! last Factorial




/*#include<stdio.h>
#include<limits.h>
long long int fact(long long int number){
    if(number==0)
        return 1;
    else
        return number*fact(number-1);
}
int main(){
    long long int number;
    printf("Enter an integer value --> : ");
    scanf("%lld",&number);
    printf("Factorial value of %lld is   : %lld",number,fact(number));
    //printf("Int Range --------> : %d\n",INT_MAX);
    //printf("Long long int Range : %lld",LLONG_MAX);
}*/

//20! last Factorial


/*
   int       = 2*10^9
   long      = 2*10^9
   long long = 2*10^18
*/