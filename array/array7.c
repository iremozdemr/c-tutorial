#include <stdio.h>

void myfunction(int array1[]){
    int array2[] = {1,2,3,4,5};

    int number = 1;
    int *numberPointer = &number;

    printf("size of int: %lu \n",sizeof(number));
    printf("size of pointer: %lu \n",sizeof(numberPointer));

    printf("size of array1: %lu \n",sizeof(array1));
    printf("size of array2: %lu \n",sizeof(array2));
}

int main(){
    int array1[] = {1,2,3,4,5};

    myfunction(array1);

    return 0;
}

//integer size: 4
//pointer size: 8