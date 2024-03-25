#include <stdio.h>

int main(){
    int array[] = {10,100,250};
    int *pointer = array;

    printf("element1: %d \n",pointer[0]);
    printf("element2: %d \n",pointer[1]);
    printf("element3: %d \n",pointer[2]);

    printf("pointer: %p \n",pointer);
    printf("element: %d \n",*pointer);
    pointer++;
    printf("pointer: %p \n",pointer);
    printf("element: %d \n",*pointer);
    pointer++;
    printf("pointer: %p \n",pointer);
    printf("element: %d \n",*pointer);

    return 0;
}