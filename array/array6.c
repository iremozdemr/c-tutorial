#include <stdio.h>

int main(){
    int array[5] = {1,2,3,4,5};
    
    int *pointer1 = array;
    int *pointer2 = &array[0];
    //int *pointer1 = &array;
    //yanlış

    printf("pointer1: %p \n",pointer1);
    printf("pointer2: %p \n",pointer2);

    int myarray[] = {10,20,30,40,50};
    int *mypointer = myarray;
    int length = sizeof(myarray)/sizeof(myarray[0]);

    for(int i=0;i<length;i++){
        printf("%d ",*(mypointer+i));
    }
    printf("\n");

    for(int i=0;i<length;i++){
        printf("%d ",*mypointer);
        mypointer++;
    }
    printf("\n");

    int my2darray[2][3] = {{1,2,3},{4,5,6}};
    int row = 2;
    int column = 3;
    int (*my2dpointer)[column] = my2darray;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",*(*(my2dpointer+i)+j));
        }
    }
    printf("\n");

    return 0;
}