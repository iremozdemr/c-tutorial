#include <stdio.h>

void print1(int *array,int size){
    for(int i = 0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void print2(int array[],int size){
    for(int i = 0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    int numbers[] = {1,2,3,4,5};

    print1(numbers,5);
    print2(numbers,5);

    return 0;
}