#include <stdio.h>

//her programda main function olmak zorundadır

//her function kullanılmadan önce bunlardan biri yapılmalıdır:
//-declare edilmelidir
//-define edilmelidir

//eğer function'da return type yazılmazsa
//default olarak return type int olur

//program organization:
//include
//define
//global variables
//function declaration
//main
//function definition

int myfunction(int, int);
//function declaration

int main(){
    int sum = myfunction(5,3);
    printf("%d \n",sum);

    return 0;
}

int myfunction(int x, int y){
    int sum = x+y;
    return sum;
}
//function definition