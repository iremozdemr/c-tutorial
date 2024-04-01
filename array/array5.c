#include <stdio.h>

void function1(int* array){
    printf("%lu \n",sizeof(array));
}

void function2(int array[]){
    printf("%lu \n",sizeof(array));
}

int main(){
    int array[] = {1,2,3,4,5};
    int *arrayPointer = &array;

    //array'i function'a parametre olarak vermenin
    //3 farklı yolu

    printf("sizeof value in function1: ");
    function1(array);

    printf("sizeof value in function1: ");
    function1(arrayPointer);

    printf("sizeof value in function2: ");
    function2(array);

    printf("sizeof value in function2: ");
    function2(arrayPointer);

    printf("sizeof value in main: ");
    printf("%lu \n",sizeof(array));
}