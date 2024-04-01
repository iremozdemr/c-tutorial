#include <stdio.h>

int main(){
    int number = 5;
    int *pointer1 = &number;
    int **pointer2 = &pointer1;
    int ***pointer3 = &pointer2;

    printf("number1: %d \n",*pointer1);
    printf("pointer1: %p \n",pointer1);

    printf("number2: %d \n",**pointer2);
    printf("pointer2: %p \n",pointer2);

    printf("number3: %d \n",***pointer3);
    printf("pointer3: %p \n",pointer3);
    return 0;
}