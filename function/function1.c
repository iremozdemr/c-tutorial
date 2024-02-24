#include <stdio.h>

//every program must have the main function
//all functions must be declared or defined before being used

//program organization:
//include
//define
//global variables
//function declaration
//main
//function definition

int myfunction(int, int);
//function declaration

int main(){
    int sum = myfunction(5,3);
    printf("%d \n",sum);

    return 0;
}

int myfunction(int x, int y){
    int sum = x+y;
    return sum;
}
//function definition