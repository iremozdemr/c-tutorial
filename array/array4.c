#include <stdio.h>

int main(){
    int array[] = {1,2,3};
    
    int size = sizeof(array)/sizeof(int);

    printf("%d \n",size);

    return 0;
}