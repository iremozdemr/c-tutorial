#include <stdio.h>

void function(int n){
    printf("pointer in function: %p \n",&n);
}

int main(){
    int number = 5;

    printf("pointer in main function: %p \n",&number);

    function(number);

    return 0;
}