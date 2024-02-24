#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 5;
    printf("before if block: %d \n",number);

    if(1){
        int number = 100;
        printf("if block: %d \n",number);
    }

    printf("after if block: %d \n",number);

    //disaridaki variable tekrar iceride tanimlanabilir
    //if blogunun icinde iken local variable kullanilir
    //if blogunun disinda iken global variable kullanilir

    return 0;
}