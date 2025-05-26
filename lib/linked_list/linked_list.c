#include "linked_list.h"

struct Node* create_node(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (!new_node) return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void append_node(struct Node** head, int data) {
    struct Node* new_node = create_node(data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL)
        current = current->next;
    current->next = new_node;
}

void prepend_node(struct Node** head, int data) {
    struct Node* new_node = create_node(data);
    new_node->next = *head;
    *head = new_node;
}

void insert_after(struct Node* prev_node, int data) {
    if (prev_node == NULL) return;
    struct Node* new_node = create_node(data);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void delete_node_by_value(struct Node** head, int value) {
    struct Node* current = *head;
    struct Node* prev = NULL;

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) return;

    if (prev == NULL)
        *head = current->next;
    else
        prev->next = current->next;

    free(current);
}

void delete_head(struct Node** head) {
    if (*head == NULL) return;
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void delete_tail(struct Node** head) {
    if (*head == NULL) return;

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node* current = *head;
    while (current->next->next != NULL)
        current = current->next;

    free(current->next);
    current->next = NULL;
}

struct Node* search_node(struct Node* head, int key) {
    while (head != NULL) {
        if (head->data == key)
            return head;
        head = head->next;
    }
    return NULL;
}

void reverse_list(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void print_linked_list(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void free_linked_list(struct Node** head) {
    struct Node* current = *head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}
