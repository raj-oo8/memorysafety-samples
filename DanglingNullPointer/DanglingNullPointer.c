#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 42; // Assign a value to the allocated memory
    printf("Value: %d\n", *ptr);

    free(ptr); // Free the allocated memory
    // ptr = NULL; // Set pointer to NULL to avoid dangling pointer

    // Attempting to access the memory after it has been freed
    if (ptr != NULL) {
        printf("Value after free: %d\n", *ptr); // This line will not execute
    } else {
        printf("Pointer is NULL, cannot dereference\n");
    }

    return 0;
}