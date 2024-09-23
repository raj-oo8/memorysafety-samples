#include <stdio.h>
#include <stdlib.h>


void foo(){
    // Allocate memory for an integer on the heap
    int *ptr = (int *)malloc(sizeof(int));

    // if Not freed, memory leak will occur
}

int main() {

    while(1){
        foo();
    }

    return 0;
}