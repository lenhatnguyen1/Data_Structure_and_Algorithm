#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Represents a node in a singly linked list.
 */
struct Node {
    int data;              /**< The data stored in the node */
    struct Node* next;     /**< Pointer to the next node */
};

/**
 * @brief Creates a new node with the given data.
 * 
 * @param data The data to store in the node.
 * @return Pointer to the newly created node, or NULL on failure.
 */
struct Node* create_node(int data);

/**
 * @brief Appends a new node with the given data to the end of the list.
 * 
 * @param head Pointer to the head pointer of the list.
 * @param data The data to append.
 */
void append_node(struct Node** head, int data);

/**
 * @brief Prepends a new node with the given data to the beginning of the list.
 * 
 * @param head Pointer to the head pointer of the list.
 * @param data The data to prepend.
 */
void prepend_node(struct Node** head, int data);

/**
 * @brief Inserts a new node with the given data after the specified node.
 * 
 * @param prev_node Pointer to the node after which the new node will be inserted.
 * @param data The data to insert.
 */
void insert_after(struct Node* prev_node, int data);

/**
 * @brief Deletes the first node in the list that contains the specified value.
 * 
 * @param head Pointer to the head pointer of the list.
 * @param value The value to delete.
 */
void delete_node_by_value(struct Node** head, int value);

/**
 * @brief Deletes the head node of the list.
 * 
 * @param head Pointer to the head pointer of the list.
 */
void delete_head(struct Node** head);

/**
 * @brief Deletes the last node of the list.
 * 
 * @param head Pointer to the head pointer of the list.
 */
void delete_tail(struct Node** head);

/**
 * @brief Searches for the first node with the specified key.
 * 
 * @param head Pointer to the head of the list.
 * @param key The data to search for.
 * @return Pointer to the node containing the key, or NULL if not found.
 */
struct Node* search_node(struct Node* head, int key);

/**
 * @brief Reverses the entire linked list.
 * 
 * @param head Pointer to the head pointer of the list.
 */
void reverse_list(struct Node** head);

/**
 * @brief Prints all elements of the linked list.
 * 
 * @param head Pointer to the head of the list.
 */
void print_linked_list(struct Node* head);

/**
 * @brief Frees all nodes in the linked list and sets the head to NULL.
 * 
 * @param head Pointer to the head pointer of the list.
 */
void free_linked_list(struct Node** head);

#endif
