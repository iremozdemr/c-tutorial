#include <stdio.h>

#define variable1 7

enum variables {variable2=6};

const int variable3 = 5;

int main(){
    const int variable4 = 12;

    printf("variable1: %d \n",variable1);
    printf("variable2: %d \n",variable2);
    printf("variable3: %d \n",variable3);
    printf("variable4: %d \n",variable4);

    return 0;
}

//constant variable'lar 2 şekilde tanımlanabilir
//define kullanarak
//enum kullanarak
//const kullanarak