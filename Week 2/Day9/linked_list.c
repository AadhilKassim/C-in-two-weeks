#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print_data_and_adress(struct node *p);
void add_data_to_end(struct node *p, int data);
struct node * add_data_to_start(struct node *p, int data);

int main()
{
    struct node *head = NULL;                          // Declaring head as a pointer to a struct node
    head = (struct node *)malloc(sizeof(struct node)); // Allocating memory for head

    // Error checking for malloc
    if (head == NULL)
    {
        printf("Memory not allocated.\n");
        return 1;
    }

    head->data = 45;   // Assigning data to the head node
    head->link = NULL; // Assigning link to NULL

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node)); // Allocating memory for second node
    if (current == NULL)
    {
        printf("Memory not allocated.\n");
        free(head); // Free head in case of failure to allocate memory for second node
        return 1;
    }

    current->data = 98;
    current->link = NULL;
    head->link = current; // Linking the second node to the head

    current = (struct node *)malloc(sizeof(struct node)); // Allocating memory for third node
    if (current == NULL)
    {
        printf("Memory not allocated.\n");
        free(head->link); // Free the second node before exiting
        free(head);       // Free head node
        return 1;
    }

    current->data = 96;
    current->link = NULL;
    head->link->link = current; // Linking the third node to the second node

    print_data_and_adress(head); // prints the data and address of all the linked lists

    add_data_to_end(head, 67); //adds new link at the end of the list

    printf("List after insertion of new node at the end\n");
    print_data_and_adress(head); //prints new list with the new node added
    head = add_data_to_start(head,2); //adds new node at the start
    printf("\nNew linked List after insertion of node at start\n");
    print_data_and_adress(head); //prints the current list after updation

    // Freeing all allocated memory
    free(head->link->link); // Free third node
    free(head->link);       // Free second node
    free(head);             // Free head node

    return 0;
}

void print_data_and_adress(struct node *p)
{
    if (p == NULL)
    {
        printf("The list is empty");
    }

    struct node *ptr = NULL;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr = p;
    int i = 1;
    while (ptr != NULL)
    {
        
        printf("Data in node %d: %d\nAddress of next node: %p\n", i, ptr->data, (void *)ptr->link);
        ptr = ptr->link;
        i++;
    }
}

void add_data_to_end(struct node *p, int data)
{
    struct node *ptr, *temp;
    ptr =p;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
        ptr= ptr->link;
    }
    ptr->link = temp;
}

struct node * add_data_to_start(struct node *p, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;

    ptr->link=p;
    p=ptr;
    return p;
}