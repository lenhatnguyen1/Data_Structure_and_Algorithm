/**
 * @file array.h
 * @brief Function declarations for basic array operations.
 * 
 * This header provides declarations for utility functions to manipulate 
 * arrays, including sorting, reversing, searching, and finding min/max values.
 */

#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>

#define STATUS_OK 0
#define STATUS_NOT_OK 1

/**
 * @brief Swaps two integer values.
 * 
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void swap (int *a, int *b);

/**
 * @brief Prints the elements of the array to stdout.
 * 
 * @param arr Pointer to the array.
 * @param size Number of elements in the array.
 */
void array_print (int *arr, int size);

/**
 * @brief Reverses all the elements of the array in place.
 * 
 * @param arr Pointer to the array.
 * @param size Number of elements in the array.
 */
void array_reverse (int *arr, int size);

/**
 * @brief Finds and returns the maximum value in the array.
 * 
 * @param arr Pointer to the array.
 * @param size Number of elements in the array.
 * @return int Maximum value found.
 */
int array_find_max (int *arr, int size);

/**
 * @brief Finds and returns the minimum value in the array.
 * 
 * @param arr Pointer to the array.
 * @param size Number of elements in the array.
 * @return int Minimum value found.
 */
int array_find_min (int *arr, int size);

/**
 * @brief Sorts the array in ascending order (bubble sort).
 * 
 * @param arr Pointer to the array.
 * @param size Number of elements in the array.
 */
void array_increase (int *arr, int size);

/**
 * @brief Sorts the array in descending order by sorting ascending first, then reversing.
 * 
 * @param arr Pointer to the array.
 * @param size Number of elements in the array.
 */
void array_decrease (int *arr, int size);

/**
 * @brief Performs binary search on a sorted array to find the given element.
 * 
 * @param element The value to search for.
 * @param arr Pointer to the sorted array (ascending).
 * @param size Number of elements in the array.
 * @return int Index of the element if found, otherwise -1.
 */
int array_binary_search (int element, int *arr, int size);

void array_insert (int *arr, int size);

void array_remove (int *arr, int size);

int array_set (int index, int value, int *arr, int size);

#endif
