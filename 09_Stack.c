#include<stdio.h>
int Stack[100],Choice,size,top,push_input;
void push(void);
void pop(void);
void display(void);
int main(){
    top=0;
    printf("Enter the size of the Stack : ");
    scanf("%d",&size);
    printf("\nStack operation using an Array ");
    printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit\n");
    do{
        printf("Enter Your Choice --------> : ");
        scanf("%d",&Choice);
        switch(Choice){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                printf("Exit.");
                break;
            }
            default:{
                printf("\nPlease Enter a valid Choice (1/2/3/4)");
            }
        }
    }
    while(Choice!=4);{
        return 0;
    }
}
void push(){
    if(top>=size){
        printf("Stack is Overflow.\n");
    }
    else{
        printf("Enter your input  --------> : ");
        scanf("%d",&push_input);
        top++;
        Stack[top]=push_input;
    }
}
void pop(){
    if(top<=0){
        printf("Stack is Underflow.\n");
    }
    else{
        printf("The Pop(Deleted) element is : %d\n",Stack[top]);
        top--;
    }
}
void display(){
    if(top>=1){
        printf("The element in Stack : ");
        for(int i=top;i>=1;i--){
            printf("\n%d",Stack[i]);
        }
        printf("\n");
    }
    else{
        printf("Stack is Empty.\n");
    }
}