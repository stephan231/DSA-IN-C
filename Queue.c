// //queue Array Implementation

// #include <stdio.h>
// #define N 5
// int queue[N];
// int front=-1,rear=-1;
// void enqueue(int data)
// {
//     if(rear==N-1)
//     printf("Overflow");
//     //insert first element
//     else if(front==-1 && rear==-1)
//     {
//         front=rear=0;
//         queue[rear]=data;
//     }
//     else{
//         rear++;
//         queue[rear]=data;
        
        
//     }
// }

// void dequeue()
// {
//     if(front==-1 && rear==-1)
//     printf("queue is empty");
//     //if only one element is present
//     else if(front ==rear){
//         front=rear=-1;
        
//     }
//     else{
//         printf("The dequeued element is %d",queue[front]);
//         front++;
        
//     }
// }

// void display()
// {
//      if(front==-1 && rear==-1)
//     printf("queue is empty");
//     else{
//         for(int i=front;i<rear+1;i++)
//         {
//             printf("%d ",queue[i]);
//         }
//     }
// }

// void peek(){
//      if(front==-1 && rear==-1)
//     printf("queue is empty");
//     printf("%d ",queue[front]);
    
// }
// int main()
// {
    
//     enqueue(3);
//     enqueue(2);
//     enqueue(2);
//     enqueue(2);
//     display();
//     dequeue();
//     display();
//     peek();
    

//     return 0;
// }


//queue using linked list


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;

};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue( int data){
    struct node * newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    //for adding first element
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    
}

void dequeue()
{
  struct node *temp=NULL;
  temp=front;
     //for adding first element
    if(front==NULL && rear==NULL)
    {
        printf("Queue is Empty");
    }
    else
    
  {
      printf(" delete data is %d ",temp->data);
     front=front->next;
  free(temp);
  
      
  }
    
}

void display()
{
    struct node *temp=0;
     //for adding first element
    if(front==NULL && rear==NULL)
    {
        printf("Queue is Empty");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    
}

void peek(){
    if(front==NULL && rear==NULL)
    {
        printf("Queue is Empty");
    }
    printf(" %d ",front->data);
    
}
int main()
{
    
    enqueue(3);
    enqueue(2);
    enqueue(2);
    enqueue(2);
  // display();
    dequeue();
    //display();
     peek();
    

    return 0;
}