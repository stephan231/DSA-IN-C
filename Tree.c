
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};struct node *root=NULL;

struct node* create()
{
    int x;
    struct node* new=malloc(sizeof(struct node));
    printf("Enter the data to b inserted\n");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    new->data=x;
    printf("Enter the left child of %d\n",x);
    new->left=create();
    printf("Enter the right child of %d\n",x);
    new->right=create();
    return new;
}


int main()
{
    root=create();
    
    return 0;
}
