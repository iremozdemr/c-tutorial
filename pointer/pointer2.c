#include <stdio.h>

int main(){
    int num1;
    int *pointer1 = &num1;

    int num2 = 5;
    int *pointer2 = &num2;

    printf("pointer1 %p \n",pointer1);
    printf("pointer2 %p \n",pointer2);

    return 0;
}