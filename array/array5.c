#include <stdio.h>

void function(int* array){
    printf("%lu \n",sizeof(array));
}

int main(){
    int array[] = {1,2,3,4,5};

    printf("sizeof value in function: ");
    function(&array);

    printf("sizeof value in main: ");
    printf("%lu \n",sizeof(array));
}