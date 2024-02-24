#include <stdio.h>

#define variable1 7

const int variable2 = 6;

int main(){
    const int variable3 = 5;

    printf("variable1: %d \n",variable1);
    printf("variable2: %d \n",variable2);
    printf("variable3: %d \n",variable3);

    return 0;
}

//constant variable'lar 2 şekilde tanımlanabilir
//define kullanarak
//const kullanarak