#include<stdio.h>

const int max_size=5;
int stack[max_size];
int top=-1;


void push(int n){
    if(top==max_size-1){
        printf("stack is full");
        return;
    }
    top++;
    stack[top]=n;
}

void pop(){
    if(top==-1){
        printf("stack is empty\n");
        return;
    }
    top--;

}

void show(){
    if(top==-1){
        printf("stack is empty\n");
        return;
    }

    for(int i=top;i>=0;i--){
        printf("%d \t",stack[i]);
    }
    printf("\n");
}

int main(){
    int num,n;
    do{
        printf("1: push,\n 2: pop \n3: show \n 4: exit\n");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            printf("enter a number");
            scanf("%d",&n);
            printf("\n");
            push(n);
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            printf("stack: \t");
            show();
            break;
        case 4:
            break;
        default:
        printf("invalid input");
            break;
        }
    }while (num!=4);
    printf("\n\n\n\n");
    
}