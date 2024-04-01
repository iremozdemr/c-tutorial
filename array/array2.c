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

    printf("pointer 1: %p \n",elementPointer);
    printf("element 1: %d \n",*(elementPointer));

    printf("pointer 2: %p \n",elementPointer+1);
    printf("element 2: %d \n",*(elementPointer+1));

    printf("pointer 3: %p \n",elementPointer+2);
    printf("element 3: %d \n",*(elementPointer+2));

    printf("pointer 4: %p \n",elementPointer+3);
    printf("element 4: %d \n",*(elementPointer+3));

    printf("pointer 5: %p \n",elementPointer+4);
    printf("element 5: %d \n",*(elementPointer+4));

    printf("pointer 6: %p \n",elementPointer+5);
    printf("element 6: %d \n",*(elementPointer+5));

    printf("pointer 7: %p \n",elementPointer+6);
    printf("element 7: %d \n",*(elementPointer+6));

    return 0;
}