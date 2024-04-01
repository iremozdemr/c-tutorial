#include <stdio.h>

void falseSwap(int num1,int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void trueSwap(int *num1,int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){
    int num1 = 1;
    int num2 = 2;

    falseSwap(num1,num2);
    printf("num1: %d \n",num1);
    printf("num2: %d \n",num2);

    trueSwap(&num1,&num2);
    printf("num1: %d \n",num1);
    printf("num2: %d \n",num2);
    return 0;
}