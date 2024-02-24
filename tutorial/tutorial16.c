#include <stdio.h>

int main(){
    const int value1 = 5;
    int const value2 = 10;

    printf("value1: %d \n",value1);
    printf("value2: %d \n",value2);

    const int *pointer1 = &value1;
    int const *pointer2 = &value2;

    printf("pointer1: %p \n",pointer1);
    printf("pointer2: %p \n",pointer2);

    //int *pointer3 = &value1;
    //int *pointer4 = &value2;
    //error

    return 0;
}