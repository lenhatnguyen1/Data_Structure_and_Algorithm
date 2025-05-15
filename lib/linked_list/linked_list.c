#include "linked_list.h"

struct Node
{
    int data;
    struct Node* next;
};

void print_linked_list (struct Node* head)
{
    struct Node* current = head;

    while (current != NULL)
    {
        printf("%d -> ",current->data);
        current = current->next;
    } 
    printf("NULL\n");
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    print_linked_list(head);


    return 0;
}
