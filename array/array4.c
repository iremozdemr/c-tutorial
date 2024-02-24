#include <stdio.h>

int main(){
    int array[] = {1,2,3};
    
    int size = sizeof(array)/sizeof(int);
    int element = array[4];

    printf("%d \n",size);
    printf("%d \n",element);

    return 0;
}