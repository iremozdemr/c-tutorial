#include <stdio.h>
#include <stdarg.h>

//number = number of arguments
int add(int number, ...){
    va_list args;
    int sum = 0;

    va_start(args,number);

    for(int i = 0; i<number; i++){
        sum = sum + va_arg(args,int);
    }

    va_end(args);

    return sum;
}

int main(){

    int result1 = add(3,1,2,3);
    printf("the result is: %i \n",result1);

    int result2 = add(4,1,2,3,4);
    printf("the result is: %i \n",result2);

    return 0;
}