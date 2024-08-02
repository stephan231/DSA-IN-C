
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *left,*right;
};
struct node * craete_new(int data)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->left=new->right=NULL;
    return new;
}

struct node* Insert(struct node *root,int data)
{
    if(root==NULL)
    {
        root=craete_new(data);
        return root;
    }
    else if(data<=root->data)
    {
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
    
}
bool search(struct node *root,int data)
{
    if(root==NULL)return false;
    else if(root->data==data) return true;
    else if(data <=root->data) return search(root->left,data);
    else return search(root->right,data);
}

int main()
{
    struct node *root=NULL;

   root= Insert(root,15);
    root= Insert(root,10);
    root= Insert(root,20);
    root= Insert(root,25);
    root= Insert(root,8);
    root= Insert(root,12);
    // root= Insert(root,8);
    if(search(root,99))
    {
        printf("Element present");
    }
    else{
        printf("Element not present");
    }
    
    
    return 0;
}
