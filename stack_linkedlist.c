
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
}*top=NULL;

void push(int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    temp->link=top;
    top=temp;
}

int pop()
{
    struct node*temp=NULL;
    temp=top->link;
    int val=top->data;
    free(top);
    top=temp;
    return val;
}

void print()
{
    struct node *temp=top;
    
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

int peek()
{
    int val=top->data;
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