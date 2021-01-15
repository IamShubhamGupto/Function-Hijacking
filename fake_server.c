#include<stdlib.h>
#include<stdio.h>
#include "fake_server.h"
void* my_malloc(int n){
    printf("calling function my_malloc\n");
    return malloc(n);
}

void my_free(void* ptr){
    printf("calling function my_free\n");
    if(ptr == NULL){
        printf("Cannot free null pointer\n");
        return;
    }
    free(ptr);
}