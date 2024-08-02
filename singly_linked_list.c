#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void count(struct node *head) {
    int c = 0;
    struct node *ptr = head;
    while (ptr != NULL) {
        c++;
        ptr = ptr->link;
    }
    printf("Number of nodes: %d\n", c);
}

void add_at_end(struct node *head, int data) {
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void display(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

struct node* add_at_beg(struct node *head, int data) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    head = temp;
    return head;
}

void delete_at_beg(struct node **head) {
    if (*head == NULL)
        printf("List is empty\n");
    else {
        struct node *ptr = *head;
        *head = ptr->link;
        free(ptr);
    }
}

void search(struct node *head, int element) {
    struct node *ptr = head;
    int position = 0;
    int found = 0;

    while (ptr != NULL) {
        position++;
        if (ptr->data == element) {
            found = 1;
            printf("Element %d found at position %d\n", element, position);
        }
        ptr = ptr->link;
    }

    if (!found) {
        printf("Element %d not found in the list\n", element);
    }
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 23;
    head->link = NULL;

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 19;
    newNode->link = NULL;
    head->link = newNode;

    newNode = malloc(sizeof(struct node));
    newNode->data = 11;
    newNode->link = NULL;
    head->link->link = newNode;

    add_at_end(head, 12);
    head = add_at_beg(head, 6);

    printf("List after adding elements: ");
    display(head);

    delete_at_beg(&head);

    printf("List after deleting the first element: ");
    display(head);

    search(head, 12);

    return 0;
}
