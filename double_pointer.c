#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef enum{
    STATUS_GOOD,
    STATUS_BAD
} status_t;
/**
 * Funtion taks double pointer arr and a new size as parameter
 *
 */
status_t foo(int **arr, size_t new_size){

    // the realloc function attempts to resize the mermoy block
    // pointed to by *arr to new_size elements
    int *temp = realloc(*arr, new_size*sizeof(int));
    if(temp == NULL){
        printf("Memory allocation failed\n");
        return STATUS_BAD;
    }

    // update the original pointer *arr to point to the
    // new memory block
    *arr = temp;
    return STATUS_GOOD;
}
int main(){
    size_t initial_size = 5;
    size_t new_size = 10;

    int *arr = malloc(initial_size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for(size_t i = 0; i < initial_size; i++){
        arr[i] = i;
    }

    printf("initial array: \n");
    for(size_t i = 0; i < initial_size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    if(STATUS_BAD == foo(&arr, new_size)){
        printf("oh no.");
        return -1;
    }

    for(size_t i = initial_size; i < new_size; i++){
        arr[i] = i;
    }

    printf("Resized array\n");

    for(size_t i = 0; i < new_size; i++){
        printf("%d  ",arr[i]);
    }

    printf("\n");

    // free(arr);
    // arr = NULL;
    return 0;
}
