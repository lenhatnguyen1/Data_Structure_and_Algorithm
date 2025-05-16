#include "array.h"

// for testing
int main ()
{
    int arrSize = 10;
    int arr[10] = {7, 2, 2, 1, 4, 50, 20, 33, 40, 16};

    // // test reverse
    // printf("Test reverse\n");
    // array_print(arr, arrSize);
    // array_reverse(arr, arrSize);
    // printf("\n");
    // array_print(arr, arrSize);
    // printf("------------------\n");

    // // test sort
    // printf("Test sort\n");
    // array_increase (arr, arrSize);
    // array_print(arr, arrSize);
    // printf("------------------\n");
    // array_decrease (arr, arrSize);
    // array_print (arr, arrSize);
    // printf("------------------\n");

    // // test search
    // printf("Test search\n");
    // int index;
    // int testVal = 50;
    // array_increase (arr, arrSize);
    // array_print(arr, arrSize);
    
    // index = array_binary_search(testVal, arr, arrSize);
    // printf("Index of %d is: %d\n", testVal, (index + 1));
    // printf("------------------\n");

    // array_binary_search(50,arr,arrSize);

    array_set(0, 1000, arr, arrSize);
    array_print(arr, arrSize);
    
    return 0;
}