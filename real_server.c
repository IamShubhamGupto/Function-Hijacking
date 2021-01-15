#include<stdio.h>
#include<stdlib.h>
#include "real_server.h"
void* init_array(int n){
    printf("calling function malloc\n");
    return malloc(sizeof(int)*n);
}

void free_array(void* ptr){
    printf("calling function free\n");
    free(ptr);
}