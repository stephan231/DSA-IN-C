#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *front =NULL;
struct node *rear=NULL;

void enqueue(int data)
{
    struct node *new=malloc(sizeof(struct node));
     new->data=data;
        new->link=NULL;
    if(front==NULL && rear==NULL)
    {
       
        front=rear=new;
    }
    else{
        rear->link=new;
        rear=new;
    }
}

void dequeue()
{
     if(front==NULL && rear==NULL)
    {
       
       printf("Queue is empty");
    }
    else {
        printf("The deleted element is %d",front->data);
        struct node *temp=front->link;;
        
        free(front);
        front=temp;
        
    }
}
void peek()
{
    printf("%d\n",front->data);
}
void display()
{
    struct node*temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    dequeue();
    display();
}
