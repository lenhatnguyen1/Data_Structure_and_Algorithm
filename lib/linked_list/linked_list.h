#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node* create_node(int data);
void append_node(struct Node** head, int data);
void prepend_node(struct Node** head, int data);
void insert_after(struct Node* prev_node, int data);

void delete_node_by_value(struct Node** head, int value);
void delete_head(struct Node** head);
void delete_tail(struct Node** head);

struct Node* search_node(struct Node* head, int key);
void reverse_list(struct Node** head);

void print_linked_list(struct Node* head);
void free_linked_list(struct Node** head);

#endif
