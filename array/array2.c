#include <stdio.h>

int main(){
    int array[] = {10,20,30,40,50};
    int *arrayPointer = array;
    int *elementPointer = &array[0];

    printf("array pointer: %p \n",arrayPointer);
    printf("element pointer: %p \n",elementPointer);

    for(int i = 0; i<5; i++){
        printf("%d ",*(arrayPointer+i));
    }
    printf("\n");

    for(int i = 0; i<5; i++){
        printf("%d ",*(elementPointer+i));
    }
    printf("\n");

    return 0;
}