#include <stdio.h>

void changeValue(int n){
    n = 20;
}

int main(){
    int number1 = 10;
    printf("number1: %d \n",number1);

    changeValue(number1);
    printf("number1: %d \n",number1);

    static int number2 = 15;
    printf("number2: %d \n",number2);

    changeValue(number2);
    printf("number2: %d \n",number2);

    return 0;
}

//pass by value
//pass by reference