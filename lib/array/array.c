/**
 * @file array.c
 * @brief Function definitions for basic array operations.
 * 
 * This sources provides definitions for utility functions to manipulate 
 * arrays, including sorting, reversing, searching, and finding min/max values.
 */


#include "array.h"

// private
PRIVATE void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// public
PUBLIC void array_print (int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d. %d\n", (i+1), arr[i]);
    }
}

PUBLIC void array_reverse (int *arr, int size)
{
    // Swap elements from both ends towards the center
    for (int i = 0; i < size/2; i++)
    {
        swap(&arr[i], &arr[size - 1 - i]);
    }    
}

PUBLIC int array_find_max (int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

PUBLIC int array_find_min (int *arr, int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

PUBLIC int array_increase (int *arr, int size)
{
    int retVal = STATUS_NOT_OK;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    retVal = STATUS_OK;
    return retVal;
}

PUBLIC void array_decrease (int *arr, int size)
{
    array_increase (arr, size);
    array_reverse (arr, size);
}

PUBLIC int array_binary_search (int element, int *arr, int size)
{
    int mid;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        mid = low + (high - low)/2;

        if (element == arr[mid])
        {
            return mid;
        }
        else if (element > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

PUBLIC int array_set (int index, int value, int *arr, int size)
{
    int retVal = STATUS_NOT_OK;

    if (arr == NULL || index < 0 || index >= size)
    {
        return STATUS_NOT_OK;
    }    

    arr[index] = value;

    retVal = STATUS_OK;
    return retVal;
}

