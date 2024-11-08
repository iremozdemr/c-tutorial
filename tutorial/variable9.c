#include <stdio.h>

void myfunction1(int a){
    a = 20;
}

int myfunction2(int a){
    a = 20;
    return a;
}

int main(){
    int x = 5;

    printf("degistirilmeden once x: %d \n",x);
    //5

    myfunction1(x);

    printf("ilk degisimden sonra x: %d \n",x);
    //5

    x = myfunction2(x);

    printf("ikinci degisimden sonra x: %d \n",x);
    //20

    return 0;
}