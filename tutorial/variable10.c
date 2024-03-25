#include <stdio.h>

int x = 10;

void myfunction1(){
    x = 25;
}

void myfunction2(int a){
    a = 30;
}

int main(){

    printf("degistirilmeden once x: %d \n",x);
    //10

    myfunction1();

    printf("ilk degisimden sonra x: %d \n",x);
    //25

    myfunction2(x);

    printf("ikinci degisimden sonra x: %d \n",x);
    //30

    return 0;
}