#include <stdio.h>

int main(){
    int num1;
    int num2 = 5;
    int char1;
    int char2 = 'a';

    int *intpointer1 = &num1;
    int *intpointer2 = &num2;
    int *charpointer1 = &char1;
    int *charpointer2 = &char2;

    printf("num1: %d \n",*intpointer1);
    printf("num2: %d \n",*intpointer2);
    printf("char1: %c \n",*charpointer1);
    printf("char2: %c \n",*charpointer2);

    printf("int pointer1: %p \n",intpointer1);
    printf("int pointer2: %p \n",intpointer2);
    printf("char pointer1: %p \n",charpointer1);
    printf("char pointer2: %p \n",charpointer2);

    return 0;
}