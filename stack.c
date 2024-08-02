// // Stack array

// #include <stdio.h>
// #include<stdlib.h>
// #define MAX 4
// int stack_arr[MAX];
// int top=-1;

// void push(int data)
// {
//     if(top==MAX-1)
//     {
//         printf("Stack overflowed\n");
//         return;
//     }
//     top+=1;
//     stack_arr[top]=data;
// }
// int isFull()
// {
//     if(top==MAX-1)
//     {
//         return 1;
//     }
//     else
//     return 0;
// }
// int isEmpty()
// {
//     if(top==-1)
//     {
//         return 1;
//     }
//     else
//     return 0;
// }

// int pop()
// {
//     if(top==-1)
//     {
//         printf("Stack underflow");
//         exit(1);
//     }
//     int value=stack_arr[top];
//     top-=1;
//     return value;
    
// }
// void print()
// {
//     int i;
//     if(top==-1)
//     {
//         printf("Stack underflow");
//         return;
//     }
//     for(i=top;i>=0;i--)
//     {
//         printf("%d",stack_arr[i]);
//         printf("\n");
//     }
// }
// int peek(){
//     if(isEmpty()){
//         printf("Stack underflow");
//         exit(1);
//     }
//     return stack_arr[top];
// }
// int main()
// {
//     int data,choice;
//     printf("\n");
// while(1)

// {printf("\n1. Push\n");

// printf("2. Pop\n");

// printf("3. Print the top element\n");

// printf("4. Print all the elements of the stack\n");

// printf("5. Quit\n");

// printf("Please enter your choice: ");

// scanf("%d", &choice);

// switch(choice)
// {
//     case 1:
//     printf("Enter the element to be pushed: ");
//     scanf("%d",&data);
//     push(data);
//     break;
//     case 2: 
//     data=pop();
//     printf("Deleted element is %d",data);
//     break;
//     case 3:
//     printf("the top element is %d",peek());
//     break;
//     case 4:
//     print();
//     break;
//     case 5:
//     exit(1);
//     break;
//     default:
//     printf("Wrong choice");
// }
// }

//     return 0;
// }


//stack IMPLEMENTATION USING LINKED LIST

#include <stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *link;
    int data;
}*top=NULL;

void push(int data)
{
    
    struct node *new=malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("stack overflow");
        exit(1);
        
    }
    new->data=data;
    new->link=NULL;
    new->link=top;
    top=new;
}

void print()
{
    struct node *temp=NULL;
    temp=top;
    if(top==NULL)
    {
        printf("stack underflow");
        exit(1);
    }
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
        
    }
    printf("\n");
}
int peek()
{
     if(top==NULL)
    {
        printf("stack underflow");
        exit(1);
    }
    return top->data;
    
}
int isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
    return 0;
}
int  pop()
{
    
    struct node *temp=NULL;
    temp=top;
    if(isEmpty())
    {
        printf("stack underflow");
        exit(1);
    }
    top=top->link;
    int val=temp->data;
    free(temp);
    temp=NULL;
    return val;
    
    
}
int main()
{
    int choice,data;
  while(1)
  {
        {printf("\n1. Push\n");

printf("2. Pop\n");

printf("3. Print the top element\n");

printf("4. Print all the elements of the stack\n");

printf("5. Quit\n");

printf("Please enter your choice: ");

scanf("%d", &choice);

switch(choice)
{
    case 1:
    printf("Enter the element to be pushed: ");
    scanf("%d",&data);
    push(data);
    break;
    case 2: 
    data=pop();
    printf("Deleted element is %d",data);
    break;
    case 3:
    printf("the top element is %d",peek());
    break;
    case 4:
    print();
    break;
    case 5:
    exit(1);
    break;
    default:
    printf("Wrong choice");
}
  }
}
}