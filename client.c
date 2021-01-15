#include<stdio.h>
//#include "real_server.h"
#include<stdlib.h>
int main(){
    int n = 5;
    
    //int* array = init_array(n);
    #if 1
    printf("calling function malloc\n");
    int* array = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        array[i] = i;
    }

    printf("Array = \n");
    for(int i = 0; i < n; i++){
        printf("%d ",array[i]);
    }
    printf("\ncalling function free\n");
    free(array);
    #endif
    //free_array(array);
    int* ptr = NULL;
    free(ptr);
    return 0;
}