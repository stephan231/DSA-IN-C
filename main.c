// creating node
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main() {
    struct node *head=malloc(sizeof(struct node));
    head->data=23;
    head->link=NULL;
    printf("%d",head->data);
    

    return 0;
}
// // creating linked list 
// // #include <stdio.h>
// // #include<stdlib.h>
// // struct node{
// //     int data;
// //     struct node *link;
// // };
// // int main() {
// //     struct node *head=malloc(sizeof(struct node));
// //     head->data=23;
// //     head->link=NULL;
// //     printf("%d",head->data);
// //     struct node *current=malloc(sizeof(struct node));
// //     current->data=22;
// //     current->link=NULL;
// //     head->link=current;
// //     current=malloc(sizeof(struct node));
// //     current->data=22;
// //     current->link=NULL;
// //     head->link->link=current;
    

// //     return 0;
// // }
// // // count linked list
// // #include <stdio.h>
// // #include<stdlib.h>
// // struct node{
// //     int data;
// //     struct node *link;
// // };
// //    void count_no_of_node(struct node *head){
// //         int count=0;
// //         if(head==NULL)
// //         printf("LINKED LIST IS EMPTY");
// //         struct node *ptr=NULL;
// //         ptr=head;
// //         while(ptr!=NULL){
// //             count++;
// //             ptr=ptr->link;
// //         }
// //         printf("%d",count);
// //     }
// //   void print_node(struct node *head){
// //          if(head==NULL)
// //         printf("LINKED LIST IS EMPTY");
// //         struct node *ptr=NULL;
// //         ptr=head;
// //         while(ptr!=NULL){
// //            printf("%d ",ptr->data);
// //             ptr=ptr->link;
// //         }
// //     }
// //     void add_at_end(struct node *head,int data){
// //         struct node *ptr, *temp=malloc(sizeof(struct node));
// //         ptr=head;
// //         temp->data=data;
// //         temp->link=NULL;
// //         while(ptr->link!=NULL){
// //             ptr=ptr->link;
            
            
// //         }
// //         ptr->link=temp;
        
// //     }
// // int main() {
// //     struct node *head=malloc(sizeof(struct node));
// //     head->data=23;
// //     head->link=NULL;
// //     struct node *current=malloc(sizeof(struct node));
// //     current->data=22;
// //     current->link=NULL;
// //     head->link=current;
// //     current=malloc(sizeof(struct node));
// //     current->data=21;
// //     current->link=NULL;
// //     head->link->link=current;
// //     count_no_of_node(head);
// //  add_at_end(head,20);
// //     print_node(head);
    

// //     return 0;
// // }

// //ADD AT BEGGINING
// // count linked list
// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
   
//     void print_node(struct node *head){
//          if(head==NULL)
//         printf("LINKED LIST IS EMPTY");
//         struct node *ptr=NULL;
//         ptr=head;
//         while(ptr!=NULL){
//            printf("%d ",ptr->data);
//             ptr=ptr->link;
//         }
//     }
  
//     struct node* add_at_beg(struct node *head,int data){
//          struct node *ptr=malloc(sizeof(struct node));
//          ptr->data=data;
//          ptr->link=NULL;
//          //ADD AT BEGGINING
//          ptr->link=head;
//          head=ptr;
//          return head;
//     }
// int main() {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=23;
//     head->link=NULL;
//     struct node *ptr=malloc(sizeof(struct node));
//     ptr->data=22;
//     ptr->link=NULL;
//     head->link=ptr;
//     head=add_at_beg(head,24);
//      ptr=head;
//         while(ptr!=NULL){
//            printf("%d ",ptr->data);
//             ptr=ptr->link;
//         }
    
   

    
    

//     return 0;
// }
// // delete all nodes in list
// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// int main() {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=23;
//     head->link=NULL;
//     printf("%d",head->data);
//     struct node *current=malloc(sizeof(struct node));
//     current->data=22;
//     current->link=NULL;
//     head->link=current;
//     current=malloc(sizeof(struct node));
//     current->data=22;
//     current->link=NULL;
//     head->link->link=current;
//     struct node *temp=NULL;
//     while(temp!=NULL)
//     {
//         temp=temp->link;
//         free(head);
//         head=temp;


//     }
//     if(head==NULL){
//          printf("Deleted");
// //     }


    

// //     return 0;
// // }

// /////////////////////////////////////////////////////////////////////////////////
// //Doubly linked list

// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     struct node *prev;
//     int data;
//     struct node *next;
  
// };
// struct node* add_to_empty(struct node *head,int data){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->prev=NULL;
//     temp->next=NULL;
//     temp->data=data;
//     head=temp;
//     return head;
// }
// struct node* add_to_beg(struct node *head,int data){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->prev=NULL;
//     temp->next=head;
//     temp->data=data;
//     head->prev=temp;
//     head=temp;
//     return head;

// }
// struct node* add_to_end(struct node *head,int data){
//     struct node *temp=malloc(sizeof(struct node));
//     struct node *tp=head;
//     while (tp->next!=NULL)
//     {
//         tp=tp->next;
//         /* code */
//     }
//    temp->next=NULL;
//    temp->data=data;
//    temp->prev=NULL;
//    tp->next=temp;
//    temp->prev=tp;
//    return head; 

// }
// struct node* add_to_pos(struct node *head,int data,int pos){
//        struct node *temp=head;
//        struct node *temp2=NULL;
//     struct node *new=NULL;
//     new=add_to_empty(new,data);
//     new->data=data;
//     new->next=NULL;
//     new->prev=NULL;
//     while(pos!=1){
//         temp=temp->next;
//         pos--;
//     }
//     if(temp->next==NULL){
//         temp->next=new;
//         new->prev=temp;
//     }
//     else{
//         temp2=temp->next;
//         temp->next=new;
//         temp2->prev=new;
//         new->next=temp2;
//         new->prev=temp;

//     }
//     return head;

// }
// struct node* del_first(struct node *head){
//     struct node *temp=head;
//     head=head->next;
//     free(temp);
//     temp=NULL;
//     head->prev=NULL;
// }
// struct node* del_last(struct node *head){
//     struct node *temp=head;
//     struct node *temp2;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp2=temp->prev;
//     temp2->next=NULL;
//     free(temp);
//     temp=NULL;
//     return head;
    


// }
// int main(){
//     struct node *head=NULL;
//     struct node *ptr;
//     int pos=2;
//     head=add_to_empty(head,10);
//     head=add_to_beg(head,5);
//     head=add_to_end(head,15);
//     head=add_to_pos(head,1,pos);
    // head=del_first(head);
//      head=del_last(head);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }
//     //printf("%d",head->data);



// }
//creating entire single linked list
// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     struct node *prev;
//     int data;
//     struct node *next;
  
// };
// struct node* add_to_empty(struct node *head,int data){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->prev=NULL;
//     temp->next=NULL;
//     temp->data=data;
//     head=temp;
//     return head;
// }
// struct node* add_to_end(struct node *head,int data){
//     struct node *temp=malloc(sizeof(struct node));
//     struct node *tp=head;
//     while (tp->next!=NULL)
//     {
//          p=tp->next;
//         /* code */
//     }
//    temp->next=NULL;
//    temp->data=data;
//    temp->prev=NULL;
//    tp->next=temp;
//    temp->prev=tp;
//    return head; 

// }
// struct node* createList(struct node *head){
//     int n,data,i;
//     printf("ENter no of node:");
//     scanf("%d",&n);
//     if(n==0){
//         return head;
    
//     }
//     printf("\nEnter the first element:");
//     scanf("%d",&data);
//     head=add_to_empty(head,data);
//     for(i=1;i<n;i++){
//         printf("\nenter the element for node %d:",i);
//         scanf("%d",&data);
//         head=add_to_end(head,data);

//     }
//     return head;
// }
// int main(){
//     struct node *head=NULL;
//     struct node *ptr;
//     head=createList(head);
//     ptr=head;
//      while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }

// }

/////////////////////////////////////////////
//Cirucular linked list
// #include <stdio.h>
// #include<stdlib.h>

// struct node{
//     struct node *next;
//     int data;

// };
// struct node* create_list(int data){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=data;
//     temp->next=temp;
//     return temp;

// };
// struct node* add_at_beg(struct node *tail,int data){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=data;
//     temp->next=tail->next;
//     tail->next=temp;
//     return tail;

// };
// struct node* add_at_end(struct node *tail,int data){
//     struct node *temp=malloc(sizeof(struct node));
//      temp->data=data;
//      temp->next=tail->next;
//      tail->next=temp;
//      tail=tail->next;
//      return temp;
     
// }
// struct node* add_at_pos(struct node *tail,int data,int pos){
//     struct node *p=tail->next;
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=data;
//     temp->next=NULL;
//     while(pos>1){
//         p=p->next;
//         pos--;
//     }
//     temp->next=p->next;
//     p->next=temp;
//     if(p==tail){
//         tail=p->next;
//     }
//     return tail;
// }
// void print(struct node* tail){
//     struct node *ptr=tail->next;
//     do{
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }while(ptr!=tail->next);
// }
// int main(){
//     int data=1;
//     struct node *tail=NULL;
//     tail=create_list(data);
//     tail=add_at_end(tail,0);
//     tail=add_at_end(tail,2);
//     tail=add_at_pos(tail,1,2);
    
    
//     print(tail);
// }
//////////////////////////////////
//create entire list
// #include <stdio.h>
// #include<stdlib.h>

// struct node{
//     struct node *next;
//     int data;

// };
// struct node* create_list(int data){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=data;
//     temp->next=temp;
//     return temp;

// };

// struct node* add_at_end(struct node *tail,int data){
//     struct node *temp=malloc(sizeof(struct node));
//      temp->data=data;
//      temp->next=tail->next;
//      tail->next=temp;
//      tail=tail->next;
//      return temp;
    
     
// }
// struct node *create(struct node *tail){
//     int i,n,data;
//    printf("Enter no of nodes:\n");
//    scanf("%d",&n);
//    if(n==0)
//    return tail;
//    printf("Enter first element\n");
//    scanf("%d",&data);
//    tail=create_list(data);
//    for(i=1;i<n;i++){
//        printf("Entrer the %d element:\n",i+1);
//        scanf("%d",&data);
//        tail=add_at_end(tail,data);
//    }
//    return tail;
// }

// void print(struct node* tail){
//     struct node *ptr=tail->next;
//     do{
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }while(ptr!=tail->next);
// }
// int main(){
//    struct node *tail=NULL;
//    tail=create(tail);
//    print(tail);
   
   
   
   
   
// }
//Deletion in circular linked list
// #include <stdio.h>
// #include<stdlib.h>

// struct node{
//     struct node *next;
//     int data;

// };
// struct node* create_list(int data){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=data;
//     temp->next=temp;
//     return temp;

// };

// struct node* add_at_end(struct node *tail,int data){
//     struct node *temp=malloc(sizeof(struct node));
//      temp->data=data;
//      temp->next=tail->next;
//      tail->next=temp;
//      tail=tail->next;
//      return temp;
    
     
// }
// struct node *create(struct node *tail){
//     int i,n,data;
//    printf("Enter no of nodes:\n");
//    scanf("%d",&n);
//    if(n==0)
//    return tail;
//    printf("Enter first element\n");
//    scanf("%d",&data);
//    tail=create_list(data);
//    for(i=1;i<n;i++){
//        printf("Entrer the %d element:\n",i+1);
//        scanf("%d",&data);
//        tail=add_at_end(tail,data);
//    }
//    return tail;
// }
// struct node* delete_first(struct node *tail){
//     if(tail==NULL)
//     return tail;
//     if(tail->next==tail){
//         free(tail);
//         tail=NULL;
//         return tail;
        
//     }
//     struct node *temp=NULL;
//     temp=tail->next;
//     tail->next=temp->next;
//     free(temp);
//     temp=NULL;
//     return tail;
// }
// struct node* delete_last(struct node *tail){
//     if(tail==NULL)
//     return tail;
//     struct node *temp=tail->next;
//     while(temp->next!=tail){
//         temp=temp->next;
//     }
//     temp->next=tail->next;
//     free(tail);
//     tail=temp;
    
//    return tail;
        
//     }
// struct node* delete_inter(struct node *tail,int pos){
//     if(tail==NULL)
//     return tail;
//     struct node *temp=tail->next;
//     while(pos>2){
//         temp=temp->next;
//         pos--;
        
//     }
//     struct node *temp2=temp->next;
//     temp->next=temp2->next;
//     //handling the case of deleting last node
//     if(temp2==tail){
//         tail=temp;
//     }
//     free(temp2);
//     temp2=NULL;
//     return tail;
// }
// void count_node(struct node *tail){
//     // if (tail==NULL){
//     //     printf("list is empty");
//     // }
//     int c=0;
//     struct node *temp=tail->next;
//     while(temp!=tail){
//         temp=temp->next;
//         c++;
        
//     }
//     c++;
//     printf("\n%d",c);
// }
// void print(struct node* tail){
//     struct node *ptr=tail->next;
//     do{
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }while(ptr!=tail->next);
// }
// int main(){
//    struct node *tail=NULL;
//    tail=create(tail);
//   // print(tail);
   
//    //tail=delete_first(tail);
//    //tail=delete_last(tail);
//    //tail=delete_inter(tail,3);
//    count_node(tail);
//   // print(tail);
   
   
   
   
   
// }
//////////////////////////////////////////////////////////////////////////////////////
///search element
// int search_elemnet(struct node *tail,int element){
//     struct node *temp;
//     int i=0;
//     if(tail==NULL){
//         return -2;
        
//     }
//     temp=tail->next;
//     do{
//         if(temp->data==element){
//             return i;
//         }
//         temp=temp->next;
//         i++;
//     }while(temp!=tail->next);
//     return -1;
// }

///Doubly circular linked list


// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     struct node *prev;
//     int data;
//     struct node *next;
    
// };
// struct node* add_to_empty(int data){
//     struct node* temp=malloc(sizeof(struct node));
//     temp->prev=temp;
//     temp->data=data;
//     temp->next=temp;
//     return temp;
// }
// struct node* add_beg(struct node *tail,int data){
//     struct node *new=add_to_empty(data);
//     if(tail== NULL){
//         return new;
//     }
//     else{
//         struct  node *temp=tail->next;
//         new->prev=tail;
//         new->next=temp;
//         temp->prev=new;
//         tail->next=new;
//         return tail;
//     }
    
// }
// void print(struct node *tail){
//     if(tail==NULL)
//     printf("element is empty");

// else
// {
//     struct node *temp=tail->next;
//     do{
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }while(temp!=tail->next);
//     printf("\n");
// }
// }
// struct node* add_end(struct node *tail,int data){
//         struct node *new=add_to_empty(data);
//         new->next=tail->next;
//         new->prev=tail;
//         tail->next=new;
//         tail=tail->next;
//         return tail;

// }
// struct node* add_inter(struct node *tail,int data,int pos){
//     struct node *new=add_to_empty(data);
//     if(tail==NULL)
//          return new;
//     struct node *temp=tail->next;
//     while(pos>1){
//         temp=temp->next;
//         pos--;
//     }
//     new->prev=temp;
//     new->next=temp->next;
//     temp->next->prev=new;
//     temp->next=new;
//     if(temp==tail)
//         temp=tail->next;
//     return tail;
      
// }
// struct node* delete_first(struct node *tail){
//     struct node *temp=tail->next;
//     tail->next=temp->next;
//     temp->next->prev=tail;
//     free(temp);
//     temp=NULL;
//     return tail;
// }
// struct node* delete_last(struct node *tail){
//     struct node *temp;
//     temp=tail->prev;
//     temp->next=tail->next;
//     tail->next->prev=temp;
//     free(tail);
//     tail=temp;
// }
// struct node* delete_inter(struct node *tail,int pos){
//     struct node *temp=tail->next;
//     while(pos>1){
//         temp=temp->next;
//         pos--;
//     }
//     struct node *temp2=temp->prev;
//     temp2->next=temp->next;
//     temp->next->prev=temp2;
//     free(temp);
//     if(temp==tail){
//         tail=temp2;
//     }
//     return tail;

// }

// int main()
// {
//    struct node *tail=NULL;
//    tail=add_to_empty(45);
//    tail=add_beg(tail,23);
//    tail=add_end(tail,36);
//    tail=add_inter(tail,19,2);
//    print(tail);
//    printf("\n");

//    //tail=delete_first(tail);
//    //tail=delete_last(tail);
//    tail=delete_inter(tail,2);
  
//    print(tail);

//     return 0;
// }
// //////////////////////////////////////////////////////////////////////

//LInked list problems

//1)given sorted linked list add the new node inside that
// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
   
//     void print_node(struct node *head){
//          if(head==NULL)
//         printf("LINKED LIST IS EMPTY");
//         struct node *ptr=NULL;
//         ptr=head;
//         while(ptr!=NULL){
//            printf("%d ",ptr->data);
//             ptr=ptr->link;
//         }
//     }
  
//     struct node* add_at_beg(struct node *head,int data){
//          struct node *ptr=malloc(sizeof(struct node));
//          ptr->data=data;
//          ptr->link=NULL;
//          //ADD AT BEGGINING
//          ptr->link=head;
//          head=ptr;
        
//          return head;
//     }
//     struct node *insert(struct node *head,int data){
//         struct node *temp;
//         struct node *new=malloc(sizeof(struct node));
//         new->data=data;
//         new->link=NULL;
//         int key=data;
//         if(head==NULL || key<head->data){
//             new->link=head;
//             head=new;
//         }
//         else{
//             temp=head;
//             while(temp->link!=NULL && temp->link->data< key){
//                 temp=temp->link;
//             }
//             new->link=temp->link;
//             temp->link=new;
//         }
//         return  head;
//     }
// int main() {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=4;
//     head->link=NULL;
//     struct node *ptr=malloc(sizeof(struct node));
//     ptr->data=5;
//     ptr->link=NULL;
//     head->link=ptr;
//     head=add_at_beg(head,3);
//     head=add_at_beg(head,2);
//     head=insert(head,1);
//      ptr=head;
//         while(ptr!=NULL){
//            printf("%d ",ptr->data);
//             ptr=ptr->link;
//         }

// }
//////////////////////////////////////////////////////////////

//polynomial Addition
// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int expo;
//     float coeff;
//     struct node*link;
    
// };
// struct node *insert(struct node *head,float co,int ex){
//     struct node *temp;
//     struct node *new=malloc(sizeof(struct node));
//     new->coeff=co;
//     new->expo=ex;
//     new->link=NULL;
    
//     if(head==NULL || ex>head->expo){
//         new->link=head;
//         head=new;
//     }
//     else{
//         temp=head;
//         while(temp->link!=NULL && temp->link->expo>=ex){
//             temp=temp->link;
//         }
//         new->link=temp->link;
//         temp->link=new;
//     }
//     return head;
// }
// struct node* create(struct node *head){
//     int n,i;
//     float coeff;
//     int expo;
//     printf("Enter no. of terms:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter the coefficient for term %d\n",i+1);
//         scanf("%f",&coeff);
//         printf("Enter the exponent for term %d \n",i+1);
//         scanf("%d",&expo);
//         head= insert(head,coeff,expo);
//     }
//     return head;
// }
// void print(struct node *head){
//     if(head==NULL)
//     printf("No polynomial");
//     else{
//         struct node *temp=head;
//         while(temp!=NULL){
//             printf("(%.1fx^%d)",temp->coeff,temp->expo);
//             temp=temp->link;
//             if(temp!=NULL){
//                 printf(" + ");
                
//             }
//             else
//             printf("\n");
//         }
//     }
// }
// void polyAdd(struct node *head1,struct node *head2)
// {
//     struct node *ptr1=head1;
//     struct node *ptr2=head2;
//     struct node *head3=NULL;
//     while(ptr1!=NULL && ptr2!=NULL)
//     {
//     if(ptr1->expo==ptr2->expo)
//     {
//         head3=insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expo);
//         ptr1=ptr1->link;
//         ptr2=ptr2->link;
//     }
//     else if(ptr1->expo>ptr2->expo)
//     {
//                 head3=insert(head3,ptr1->coeff,ptr1->expo);
//                 ptr1=ptr1->link;

//     }
//     else if(ptr1->expo<ptr2->expo){
//                 head3=insert(head3,ptr2->coeff,ptr2->expo);
//                 ptr2=ptr2->link;

//     }
//     }
//     while(ptr1!=NULL)
//     {
//                 head3=insert(head3,ptr1->coeff,ptr1->expo);
//                 ptr1=ptr1->link;

//     }
//     while(ptr2!=NULL)
//     {
//                 head3=insert(head3,ptr2->coeff,ptr2->expo);
//                 ptr2=ptr2->link;

//     }
//     printf("\nAdded poly is");
//     print(head3);
    
// }

// int main()
// {
//    struct node *head1=NULL;
//    struct node *head2=NULL;
//    printf("\n Enter first polynomials\n");
//    head1=create(head1);
//    printf("\n Enter second polynomials\n");
//    head2=create(head2);
//    polyAdd(head1,head2);
   
// }

/////////////////////////////////////////////////////////////////////////////////////


//polynomial Multiplication
// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int expo;
//     float coeff;
//     struct node*link;
    
// };
// struct node *insert(struct node *head,float co,int ex){
//     struct node *temp;
//     struct node *new=malloc(sizeof(struct node));
//     new->coeff=co;
//     new->expo=ex;
//     new->link=NULL;
    
//     if(head==NULL || ex>head->expo){
//         new->link=head;
//         head=new;
//     }
//     else{
//         temp=head;
//         while(temp->link!=NULL && temp->link->expo>=ex){
//             temp=temp->link;
//         }
//         new->link=temp->link;
//         temp->link=new;
//     }
//     return head;
// }
// struct node* create(struct node *head){
//     int n,i;
//     float coeff;
//     int expo;
//     printf("Enter no. of terms:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter the coefficient for term %d\n",i+1);
//         scanf("%f",&coeff);
//         printf("Enter the exponent for term %d \n",i+1);
//         scanf("%d",&expo);
//         head= insert(head,coeff,expo);
//     }
//     return head;
// }
// void print(struct node *head){
//     if(head==NULL)
//     printf("No polynomial");
//     else{
//         struct node *temp=head;
//         while(temp!=NULL){
//             printf("(%.1fx^%d)",temp->coeff,temp->expo);
//             temp=temp->link;
//             if(temp!=NULL){
//                 printf(" + ");
                
//             }
//             else
//             printf("\n");
//         }
//     }
// }
// void polyMult(struct node *head1,struct node *head2)
// {
//     struct node *ptr1=head1;
//     struct node *ptr2=head2;
//     struct node *head3=NULL;
//    if(head1==NULL || head2==NULL)
//    {
//    printf("polynomial is zero");
//    return;
//    }
   
//    //multiplication of two polynomials
//    while(ptr1!=NULL){
//        while(ptr2!=NULL){
//            head3=insert(head3,ptr1->coeff*ptr2->coeff,ptr1->expo+ptr2->expo);
//            ptr2=ptr2->link;
//        }
//        ptr1=ptr1->link;
//        ptr2=head2;
//    }
//    print(head3);
//     //Adding like terms in the resulatant linked list 
//    struct node *ptr3=head3;
//    struct node *temp=NULL;
//    while(ptr3->link!=NULL)
//    {
//        if(ptr3->expo == ptr3->link->expo)
//        {
//            ptr3->coeff=ptr3->coeff+ptr3->link->coeff;
//            temp=ptr3->link;
//            ptr3->link=ptr3->link->link;
//            free(temp);
//        }
//        else{
//            ptr3=ptr3->link;
//        }
//    }
//    printf("After simplifiacation \n");
//    print(head3);
   
// }

// int main()
// {
//    struct node *head1=NULL;
//    struct node *head2=NULL;
//    printf("\n Enter first polynomials\n");
//    head1=create(head1);
//    printf("\n Enter second polynomials\n");
//    head2=create(head2);
//    polyMult(head1,head2);
   
// }

// //o/p
////////////////////////////////////////////////////
//addidtion of two numbers

//Add two numbers using linked list
// #include <stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *link;
// };
// struct node* add_node(struct node *head,int data)
// {
//     //creating new node
//     struct node *new=malloc(sizeof(struct node));
//     new->data=data;
//     new->link=NULL;
//     //Adding nodes
//     new->link=head;
//     head=new;
//     return head;
    
// }
// struct node* createLL(struct node *head,int n)
// {
//     while(n!=0)
//     {
//         head=add_node(head,n%10);
//         n/=10;
//     }
//     return head;
// }
// struct node* reverseLL(struct node *head)
// {
//     if(head==NULL)
//     return head;
//     struct node *current=NULL;
//     struct node *next=head->link;
//     head->link=NULL;
//     while(next!=NULL)
//     {
//         current=next;
//         next=next->link;
//         current->link=head;
//         head=current;
//     }
//     return head;
    
// }
// void print(struct node *head)
// {
//     struct node *temp=head;
//     if(head==NULL)
//     printf("NO NUMBERS");
//     else
//     {
//         while(temp->link!=NULL){
//             printf("%d ->",temp->data);
//             temp=temp->link;
//         }
//         printf(" %d\n",temp->data);
//     }
// }
// struct node* push(struct node *head,int data)
// {
//     struct node *new=malloc(sizeof(struct node));
//     new->data=data;
//     new->link=head;
//     head=new;
//     return head;
// }
// struct node* add(struct node* head1,struct node*  head2)
// {
//     if(head1->data==0)
//     return head2;
//     if(head2->data==0)
//     return head1;
//     struct node *ptr1=head1;
//     struct node *ptr2=head2;
//     struct node *head3=NULL;
//     int carry=0,sum;
//     while(ptr1 || ptr2)
//     {
//         sum=0;
//         if(ptr1)
//         sum+=ptr1->data;
//         if(ptr2)
//         sum+=ptr2->data;
//         sum+=carry;
//         carry=sum/10;
//         sum%=10;
//         head3=push(head3,sum);
//         if(ptr1)
//         ptr1=ptr1->link;
//         if(ptr2)
//         ptr2=ptr2->link;
//     }
//     if(carry)
//     head3=push(head3,carry);
//     return head3;
// }
// void back2num(struct node *head)
// {
//     struct node *temp=head;
//     printf("\n Result");
//     while(temp)
//     {
//         printf("%d",temp->data);
//         temp=temp->link;
//     }
//     return;
// }
// int main()
// {
//     int a,b;
//     printf("ENter two num:\n");
//     scanf("%d %d",&a,&b);
//     printf("\nlinked list representation of 1st num\n");
//     struct node *head1=NULL;
//     head1=createLL(head1,a);
//     print(head1);
//     struct node *head2=NULL;
//         printf("linked list representation of 2ndnum\n");
//     head2=createLL(head2,b);
//     print(head2);
//     head1=reverseLL(head1);
//     head2=reverseLL(head2);
//     printf("\n Reversed linked lists");
//     print(head1);
//     printf("\n");
//     print(head2);
//     struct node *head3=NULL;
//     head3=add(head1,head2);
//     printf("\n result is:\n");
//     print(head3);
//     back2num(head3);

//     return 0;
// }
////////////////////////////////////////////////////////////////////////
//STACKS aRRAY IMPLEMENTAION

/******************************************************************************

//                             Online C Compiler.
//                 Code, Compile, Run and Debug C program online.
// Write your code in this editor and press "Run" button to compile and execute it.

// *******************************************************************************/

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
////////////////////////////////////////////////////////////////////////////////////////
//PRIME FACTORISATION

// #include <stdio.h>
// #include<stdlib.h>
// #define MAX 50
// int stack[MAX];
// int top=-1;
// int isFull()
// {
//     if(top==MAX-1)
//     return 1;
//     else
//     return 0;

// }
// int isEmpty()
// {
//     if(top==-1)
//     return 1;
//     else
//     return 0;

// }
// void push(int n)
// {
//     if(isFull())
//     {
//         printf("stack overflow");
//         exit(1);
//     }
//     top++;
//     stack[top]=n;
// }
// int pop()
// {
//     int val;
    
//     if(isEmpty())
//     {
//         printf("stack underflow");
//         exit(1);
//     }
//     val=stack[top];
//     top--;
//     return val;
// }
// void primefact(int num)
// {
//     int i=2;
//     while(num!=1)
//     {
//         while(num%i==0)
//         {
//             push(i);
//             num/=i;
//         }
//         i++;
//     }
//     //print all prime primefact
//     while(top!=-1)
//     {
//         printf("%d ",pop());
//     }
// }


// int main()
// {
//     int n;
//     printf("Enter positive number:");
//     scanf("%d",&n);
//     primefact(n);

//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////

//DECIMAL TO BINARY

// #include <stdio.h>
// #include<stdlib.h>
// #define MAX 50
// int stack[MAX];
// int top=-1;
// int isFull()
// {
//     if(top==MAX-1)
//     return 1;
//     else
//     return 0;

// }
// int isEmpty()
// {
//     if(top==-1)
//     return 1;
//     else
//     return 0;

// }
// void push(int n)
// {
//     if(isFull())
//     {
//         printf("stack overflow");
//         exit(1);
//     }
//     top++;
//     stack[top]=n;
// }
// int pop()
// {
//     int val;
    
//     if(isEmpty())
//     {
//         printf("stack underflow");
//         exit(1);
//     }
//     val=stack[top];
//     top--;
//     return val;
// }
// void dec2bin(int num)
// {
//     int i=2;
//     while(num!=0)
//     {
//         int a=num%2;
//             push(a);
//             num/=2;
        
//         i++;
//     }
//     //print all prime primefact
//     while(top!=-1)
//     {
//         printf("%d ",pop());
//     }
// }


// int main()
// {
//     int n;
//     printf("Enter positive number:");
//     scanf("%d",&n);
//     dec2bin(n);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////

//stack IMPLEMENTATION USING LINKED LIST

// #include <stdio.h>
// #include<stdlib.h>

// struct node 
// {
//     struct node *link;
//     int data;
// }*top=NULL;

// void push(int data)
// {
    
//     struct node *new=malloc(sizeof(struct node));
//     if(new==NULL)
//     {
//         printf("stack overflow");
//         exit(1);
//     }
//     new->data=data;
//     new->link=NULL;
//     new->link=top;
//     top=new;
// }

// void print()
// {
//     struct node *temp=NULL;
//     temp=top;
//     if(top==NULL)
//     {
//         printf("stack underflow");
//         exit(1);
//     }
//     while(temp)
//     {
//         printf("%d ",temp->data);
//         temp=temp->link;
        
//     }
//     printf("\n");
// }
// int peek()
// {
//      if(top==NULL)
//     {
//         printf("stack underflow");
//         exit(1);
//     }
//     return top->data;
    
// }
// int isEmpty()
// {
//     if(top==NULL)
//     {
//         return 1;
//     }
//     else
//     return 0;
// }
// int  pop()
// {
    
//     struct node *temp=NULL;
//     temp=top;
//     if(isEmpty())
//     {
//         printf("stack underflow");
//         exit(1);
//     }
//     top=top->link;
//     int val=temp->data;
//     free(temp);
//     temp=NULL;
//     return val;
    
    
// }
// int main()
// {
//     int choice,data;
//   while(1)
//   {
//         {printf("\n1. Push\n");

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
//   }
// }
// }


/////////////////////////////////////////////////////////////////////////////////////////////////

//queue Array Implementation

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
///////////////////////////////////////////////////////

//queue Linked list Implementation

// #include <stdio.h>
// #include <stdlib.h>

// struct node{
//     int data;
//     struct node *next;

// };
// struct node *front=NULL;
// struct node *rear=NULL;

// void enqueue( int data){
//     struct node * newnode=malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=NULL;
//     //for adding first element
//     if(front==NULL && rear==NULL)
//     {
//         front=rear=newnode;
//     }
//     else{
//         rear->next=newnode;
//         rear=newnode;
//     }
    
// }

// void dequeue()
// {
//   struct node *temp=NULL;
//   temp=front;
//      //for adding first element
//     if(front==NULL && rear==NULL)
//     {
//         printf("Queue is Empty");
//     }
//     else
    
//   {
//       printf(" delete data is %d ",temp->data);
//      front=front->next;
//   free(temp);
  
      
//   }
    
// }

// void display()
// {
//     struct node *temp=0;
//      //for adding first element
//     if(front==NULL && rear==NULL)
//     {
//         printf("Queue is Empty");
//     }
//     else{
//         temp=front;
//         while(temp!=NULL){
//             printf("%d ",temp->data);
//             temp=temp->next;
//         }
//     }
    
// }

// void peek(){
//     if(front==NULL && rear==NULL)
//     {
//         printf("Queue is Empty");
//     }
//     printf(" %d ",front->data);
    
// }
// int main()
// {
    
//     enqueue(3);
//     enqueue(2);
//     enqueue(2);
//     enqueue(2);
//   // display();
//     dequeue();
//     //display();
//      peek();
    

//     return 0;
// }
//////////////////////////////////////////////////////

//Circular Queue Using Array

// #include <stdio.h>
// #include <string.h>
// #define n 5
// int queue[n];
// int front = -1, rear = -1;

// void enque(int x) {
//     if (front == -1 && rear == -1) {
//         front = rear = 0;
//         queue[rear] = x;
//     } else if (((rear + 1) % n) == front) {
//         printf("Queue is Full");
//     } else {
//         rear = (rear + 1) % n;
//         queue[rear] = x;
//     }
// }

// void dequeue() {
//     if (front == -1 && rear == -1) {
//         printf("Queue is empty");
//     } else if (front == rear) {
//         printf("%d ", queue[front]);
//         front = rear = -1;
//     } else {
//         printf("%d ", queue[front]);
//         front = (front + 1) % n;
//     }
// }

// void print() {
//     int i = front;
//     if (front == -1 && rear == -1) {
//         printf("Queue is empty");
//     } else {
//         while (i != rear) {
//             printf("%d ", queue[i]);
//             i = (i + 1) % n;
//         }
//         printf("%d ", queue[rear]);
//     }
// }

// void peek() {
//     printf("%d ", queue[front]);
// }

// int main() {
//     enque(2);
//     enque(2);
//     enque(2);
//     enque(2);
//     enque(2);
//     print();
//     dequeue();
//     dequeue();
//     dequeue();
//     enque(5);
//   print();
//     peek();

//     return 0;
// }

////////////////////////////////////////

//circular queue using linked list similar to circular linked list


// #include <stdio.h>
// #include <string.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };
// struct node *front=0;
// struct node *rear=0;

// void enque(int x) {
//   struct node *temp=malloc(sizeof(struct node));
//   temp->data=x;
//   temp->next=0;
//   //first Element
//   if(rear==0)
//   {
//       front=rear=temp;
//       rear->next=front;
//   }
//   else{
//       rear->next=temp;
//       rear=temp;
//       temp->next=front;
//   }
   
// }

// void dequeue() {
//   printf("%d ",front->data);
//   struct node *del=front;
//   if(front==0 && rear==0)
//   printf("Queue is Empty");
//   //only one Element is present condn
//   else if(front==rear)
//   {
//         front=rear=0; 
//         free(del);
//   }
//   else{
//   front=front->next;
//   free(del);
//   rear->next=front;
//   }
  
 
// }

// void print() {
//   struct node *i=front;
//      if(front==0 && rear==0)
//   printf("Queue is Empty");
//   while(i->next!=front)
//   {
//       printf("%d ",i->data);
//       i=i->next;
//   }
//   printf("%d ",i->data);
   
// }

// void peek() {
//       if(front==0 && rear==0)
//   printf("Queue is Empty");
//   printf("%d ",front->data);
   
// }

// int main() {
//     enque(5);
//     enque(2);
//     enque(2);
//     enque(2);
//     print();
//   dequeue();
// //     dequeue();
// //     dequeue();
// //     enque(5);
// //   print();
//   peek();

//     return 0;
// }

///////////////////////////////////////////////

//Deque


// #include <stdio.h>
// #include <string.h>
// #include<stdlib.h>
// #define n 5
// int queue[n];
// int front=-1,rear=-1;

// void enquefront(int x) {
//   if(front==rear+1 ||(front==0 && rear==n-1))
//   printf("Queue is full");
//   else if(front==-1 && rear==-1)
//   {
//       front=rear=0;
//       queue[front]=x;
//   }
//   else if(front==0)
//   {
//       front=n-1;
//       queue[front]=x;
       
//   }
//   else{
//       front--;
//       queue[front]=x;
//   }
// }

// void enqueuerear(int x) {
// //     if((front==rear+1) ||(front==0 && rear=n-1))
// //   printf("Queue is full");
//   if(front==-1 && rear==-1)
//   {
//       front=rear=0;
//       queue[rear]=x;
      
//   }
//   else if(rear==n-1){
//       rear=0;
//       queue[rear]=x;
//   }
//   else
//   {
//       rear++;
//       queue[rear]=x;
      
      
//   }

 
//   }
  
 


// void print() {
 
//  int i=front;
//  while(i!=rear)
//  {
//      printf("%d ",queue[i]);
//      i=(i+1)%n;
//  }
//  printf("%d ",queue[i]);
   
// }
// void getfront()
// {
//     if(front==-1 && rear==-1)
//     printf("queue is empty");
//     else{
//         printf("%d ",queue[front]);
//     }
    
// }
// void getrear()
// {
//     if(front==-1 && rear==-1)
//     printf("queue is empty");
//     else{
//         printf("%d ",queue[rear]);
//     }
    
// }

// void top(){
// if(front==-1 && rear==-1)
//     printf("queue is empty");
//   printf("%d ",queue[front]);
   
// }
// void dequeue(){
//      if(front==-1 && rear==-1)
//     printf("queue is empty");
//     //only one element
//     else if(front==rear)
//     {
//         printf(" %d ",queue[front]);
//         front=rear=-1;
//     }
//     else if(front==n-1)
//     {
//         printf("%d ",queue[front]);
//         front=0;
//     }
//     else{
//         printf(" %d ",queue[front]);
//         front++;
//     }
    
// }

// int main() {
//     enquefront(5);
//     enquefront(2);
//   enqueuerear (3);



//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////


//TREESSSSSSS

// TReee traversal

// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *left,*right;
// };

// struct node* create(){
//     int x;
//     struct node * new;
//     new=malloc(sizeof(struct node));
//     printf("Enter data:(-1 for no node):\n");
//     scanf("%d",&x);
//     if(x==-1){
//         return 0;
//     }
//     new->data=x;
//     printf("Enter the left child of %d:\n",x);
//     new->left=create();
//     printf("ENter the right child of %d\n:",x);
//     new->right=create();
//     return new;
    

    
// }
// void preorder(struct node *root)
// {
//     if(root==0)
//     return;
//     printf("%d ",root->data);
//     preorder(root->left);
//     preorder(root->right);
// }
// void Inorder(struct node *root)
// {
//     if(root==0)
//     return;
//     Inorder(root->left);
//     printf("%d ",root->data);
//     Inorder(root->right);
// }
// void postorder(struct node *root)
// {
//     if(root==0)
//     return;
//     postorder(root->left);
//     postorder(root->right);
//      printf("%d ",root->data);
// }

// int main()
// {
//     struct node *root;
//     root=create();
//     printf("Preorder is:\n");
//     preorder(root);
//     printf("INorder is:\n");
//     Inorder(root);
//     printf("Preorder is:\n");
//     postorder(root);
    
    
// }

