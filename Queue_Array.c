
#include <stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int data)
{
    if(rear==MAX-1)
    {printf("queue is full");
        
    }
    else if(front==-1 && rear==-1) 
    {
        front=rear=0;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
    
    
    
}

void dequeue()
{
    if(front==rear)
    {
        printf("Queue is full");
        return;
    }
    else {
        printf("The element %d is deleted\n",queue[front]);
        front++;
    }
}

void display()
{
    for(int i=front;i<rear+1;i++)
    {
        printf("%d ",queue[i]);
    }
}

void peek()
{
    if(front==-1 && rear==-1) 
    {
        printf("underflow");
    }
    else
    {
        printf("\n the top eement is %d\n",queue[front]);
    }
}

int main()
{
   enqueue(10);
   enqueue(20);
   enqueue(30);
  enqueue(400);
   dequeue();
   dequeue();
   display();
   peek();
}
