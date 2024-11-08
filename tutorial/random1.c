//rand():
//0 ve RAND_MAX arasında rastgele bir sayı üretir

//srand():
//program her çalıştırıldığında rand()'in aynı sayıyı üretmesini engeller

#include <stdio.h>
#include <stdlib.h>

int main(){
    int randomNumber = rand();
    printf("%d \n",randomNumber);

    return 0;
}