#include <stdio.h>

int x = 10;

void myfunction(){
    x = 5;
}

int main(){
    printf("%d \n", x);
    //x = 10

    myfunction();

    printf("%d \n", x);
    //x = 5

    return 0;
}