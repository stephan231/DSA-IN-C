#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node{
    int data;
    struct node *link;
};
struct node *head=NULL;

void insert_at_beg(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node*));
    if(head==NULL)
    {
        temp->link=NULL;
        temp->data=data;
        head=temp;
        
    }else{
        temp->data=data;
        temp->link=head;
        head=temp;
    }
    
}
void insert_at_end(int data)
{
    struct node *temp,*ptr;
    temp=malloc(sizeof(struct node*));
    if(head==NULL)
    {
        printf("\nOverflow");
        
    }
    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    //printf("a:%d ",ptr->data);
    temp->data=data;
    ptr->link=temp;
    temp->link=NULL;
    
    
}
void insert_at_pos(int data,int pos)
{
    struct node *temp,*ptr1,*ptr2;
    temp=malloc(sizeof(struct node*));
    ptr1=head;
    for(int i=0;i<pos-1;i++)
    {
        ptr1=ptr1->link;
        
    }
    ptr2=ptr1->link;
    temp->data=data;
    ptr1->link=temp;
    temp->link=ptr2;
    
    
}

///////////////////////////////////////INSERTION END//////////////////////////////////////////
void delete_at_beg(){
    if(head==NULL)
    printf("\nlist is empty\n");
    else{
        struct node *temp=head->link;
        printf("\n%d the element is deleted",head->data);
        free(head);
        head=temp;
    }
}
void end_delete()  
    {  
        struct node *ptr,*ptr1;  
        if(head == NULL)  
        {  
            printf("\nlist is empty");  
        }  
        else if(head -> link == NULL)  
        {  
            head = NULL;  
            free(head);  
            printf("\nOnly node of the list deleted ...");  
        }  
              
        else  
        {  
            ptr = head;   
            while(ptr->link != NULL)  
                {  
                    ptr1 = ptr;  
                    ptr = ptr ->link;  
                }  
                ptr1->link = NULL;  
                free(ptr);  
                printf("\n Deleted Node from the last ...\n");  
            }     
        }
void delete_at_pos(int pos)
{
    if(pos==0)
    {
        delete_at_beg();
    }
    else {
        struct node *ptr1=head;
        struct node *ptr2;
        for(int i=0;i<pos-1;i++)
        {
            
            ptr1=ptr1->link;
        }
        // printf("%d ",ptr1->data);
        ptr2=ptr1->link;
        if(ptr2==NULL)
        end_delete();
        else{
            ptr1->link=ptr2->link;
            free(ptr2);
            
            
        }
        
    }
}
//////////////////////////////////////DELETION END//////////////////////////////////////////////////
int count()
{
    struct node *ptr=head;
    int c=0;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->link;
    }
    printf("\n%d elements are there\n",c);
    return c;
}
void middle()
{
    int a=count();
    int mid=0;
    int l;
    if (a%2!=0)
    {
         l=(a/2)+1;
    }
    else {
         l=(a/2);
    }
   
    struct node*temp=head;
   while(l!=0)
    {
        mid=temp->data;
        temp=temp->link;
        l--;
    }
    
    printf("\n%d is middle element",mid);
    
}
void search(int key)
{
    struct node*ptr=head;
    int a=0;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            printf("element found ");
            break;
        }
        else
        a=1;
        ptr=ptr->link;
        
    }
    if(a==1)
    {
        printf("Element not found");
    }
    
    
}
void display()
{
  struct node *ptr=head;
  while(ptr!=NULL)
  {
      printf("%d ",ptr->data);
      ptr=ptr->link;
  }
  printf("\n");
}
int main()
{
    insert_at_beg(2);
    insert_at_beg(5);
    insert_at_beg(20);
     insert_at_end(30);
     insert_at_end(0);
     insert_at_pos(5,2);
     
      display();
      delete_at_beg();
      printf("\n");
      display();
     end_delete();
     display();
       delete_at_pos(2);
        insert_at_end(25);
        insert_at_end(35);
       display();
       count();
    //   search(5);
    middle();
   
     
    
    
}
