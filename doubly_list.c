//Doubly linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
  
};
struct node* add_to_empty(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->next=NULL;
    temp->data=data;
    head=temp;
    return head;
}
struct node* add_to_beg(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->next=head;
    temp->data=data;
    head->prev=temp;
    head=temp;
    return head;

}
struct node* add_to_end(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    struct node *tp=head;
    while (tp->next!=NULL)
    {
        tp=tp->next;
        /* code */
    }
   temp->next=NULL;
   temp->data=data;
   temp->prev=NULL;
   tp->next=temp;
   temp->prev=tp;
   return head; 

}
struct node* add_to_pos(struct node *head,int data,int pos){
       struct node *temp=head;
       struct node *temp2=NULL;
    struct node *new=NULL;
    new=add_to_empty(new,data);
    new->data=data;
    new->next=NULL;
    new->prev=NULL;
    while(pos!=1){
        temp=temp->next;
        pos--;
    }
    if(temp->next==NULL){
        temp->next=new;
        new->prev=temp;
    }
    else{
        temp2=temp->next;
        temp->next=new;
        temp2->prev=new;
        new->next=temp2;
        new->prev=temp;

    }
    return head;

}
struct node* del_first(struct node *head){
    struct node *temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    head->prev=NULL;
}
struct node* del_last(struct node *head){
    struct node *temp=head;
    struct node *temp2;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp2=temp->prev;
    temp2->next=NULL;
    free(temp);
    temp=NULL;
    return head;
    


}
int main(){
    struct node *head=NULL;
    struct node *ptr;
    int pos=2;
    head=add_to_empty(head,10);
    head=add_to_beg(head,5);
    head=add_to_end(head,15);
    head=add_to_pos(head,1,pos);
    head=del_first(head);
     head=del_last(head);
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",head->data);
}
