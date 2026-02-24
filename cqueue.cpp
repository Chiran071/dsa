#include<stdio.h>

const int max_size=5;
int queue[max_size];
int front=-1;
int rear=-1;

void enqueue(int n){
    if(front==(rear+1)%max_size){
        printf("queue is full");
        return;
    }
    if(front==-1){
        front=0;
    }
    rear=(rear+1)%max_size;
    queue[rear]=n; 
    printf("sucessfully inserted the element into queue");
}

void dequeue(){
    if(rear==-1 && front==-1){
        printf("queue is empty");
        return;
    }
    if(rear==front){
        printf("queue is now empty");
        front-=1;
        rear-=1;
        return;
    }
    front=(front+1)%max_size;
    printf("deleted");
}

void show(){
    if(rear==-1){
        printf("queue is empty");
        return;
    }
    printf("queque elements are: \t");
    int i=front;
    while(i!=rear){
        printf("%d \t",queue[i]);
        i=(i+1)%max_size;
    }
    printf("%d",queue[rear]);
    printf("\n");
}

int main(){
    int c,num;
    do{
        printf("enter your choise");
        printf("\n1.add\n2.remove\n3.show\n4.exit\n");
        scanf("%d",&c);
        if(c==1){
            printf("enter a number");
            scanf("%d",&num);
            enqueue(num);
        }
        else if(c==2)
            dequeue();
        else if(c==3)
            show();
        else if(c==4)
            printf("exiting....");
        else
            printf("invalid choice");
    }while(c!=4);

    
}
