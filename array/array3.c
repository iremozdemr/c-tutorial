#include <stdio.h>

//passing an array to a function
void function1(int array[]){
    for(int i = 0; i<5; i++){
        printf("%d  ",array[i]);
    }
    printf("\n");
}

//returning an array from a function
int* function2(){
    static int numbers[5] = {1,2,3,4,5};
    return numbers;
}

int main(){
    int array[5] = {11,22,33,44,55};

    function1(array);

    int *pointer = function2();

    for(int i = 0; i<5; i++){
        printf("%d ",*(pointer+i));
    }
    printf("\n");
    
    return 0;
}