#include <stdio.h>

int main(){
    int intVariable = 1;
    int *intPointer = &intVariable;

    char charVariable = 'a';
    char *charPointer = &charVariable;

    printf("int pointer: %p \n",intPointer);
    printf("int pointer + 1: %p \n",intPointer+1);
    
    printf("char pointer: %p \n",charPointer);
    printf("char pointer + 1: %p \n",charPointer+1);
    return 0;
}