
#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int Stack[MAX];
int top=-1;

void push(int data)
{
    if(top==MAX-1)
    {
        printf("Stacck overflow");
        return;
    }
    else{
        top+=1;
        Stack[top]=data;
    }
}

int pop()
{
    if(top==-1){
        printf("Stack underflow");
        exit(1);        
        
    }
    
    else{
        int val=Stack[top];
        top-=1;
        return val;
    }
}
int peek()
{
    if(top==-1)
    {printf("Stack underflow");
        return;
    }
    else
    {
        return Stack[top];
        
    }
}

void print()
{
    if(top==-1)
    printf("Stack underflow");
    else
    {
        for(int i=top;i>0;i--)
        {
            printf("%d ",Stack[i]);
        }
    }
}
int main()
{
    int data,choice;
    printf("\n");
while(1)

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

    return 0;
}