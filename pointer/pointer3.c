#include <stdio.h>

int main(){
    int array1[5] = {1,2,3,4,5};
    int *pointer1 = array1;

    for(int i=0;i<5;i++){
        printf("%d ",*pointer1++);
    }
    printf("\n");

    int array2[5] = {10,20,30,40,50};
    int *pointer2 = array2;

    for(int i=0;i<5;i++){
        printf("%d ",*pointer2);
        pointer2++;
    }
    printf("\n");

    int array3[5] = {11,21,31,41,51};
    int *pointer3 = array3;

    for(int i=0;i<5;i++){
        printf("%d ",pointer3[i]);
    }
    printf("\n");

    int array4[2][3] = {{1,2,3},{4,5,6}};
    int (*pointer4)[3] = array4;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",*(*(pointer4+i)+j));
        }
    }
    printf("\n");

    int array5[2][3] = {{10,20,30},{40,50,60}};
    int (*pointer5)[3] = array5;

    return 0;
}