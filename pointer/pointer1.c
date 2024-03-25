#include <stdio.h>

int main(){
    int value1 = 10;
    int *pointer1;
    pointer1 = &value1;
    printf("value1: %d \n",*pointer1);
    printf("pointer1: %p \n",pointer1);

    int value2 = 20;
    int *pointer2 = &value2;
    printf("value2: %d \n",*pointer2);
    printf("pointer2: %p \n",pointer2);

    int *nullpointer = NULL;
    void *voidpointer;
    int *const constantpointer;
    const int *pointertoconstant;
    
    return 0;
}