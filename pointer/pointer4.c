#include <stdio.h>

int main(){
    int value1 = 5;
    int *pointer1 = &value1;

    printf("pointer: %d \n",pointer1);
    pointer1++;
    printf("pointer+1: %d \n",pointer1);
    pointer1--;
    printf("pointer-1: %d \n",pointer1);

    int value2 = 7;
    int *pointer2 = &value2;

    printf("pointer: %d \n",pointer2);
    pointer2 = pointer2+5;
    printf("pointer+5: %d \n",pointer2);
    pointer2 = pointer2-5;
    printf("pointer-5: %d \n",pointer2);
    return 0;
}