#include <stdio.h>

int main(){
    int variable1 = 10;
    int variable2 = 20;

    const int *pointer1 = &variable1;
    printf("pointer1in tuttugu degiskenin degeri: %d \n",*pointer1);

    pointer1 = &variable2;
    printf("pointer1in tuttugu degiskenin degeri: %d \n",*pointer1);
    //pointerın tuttuğu değişken değiştirilebilir

    //*pointer1 = 70;
    //printf("pointerin tuttugu degiskenin degeri: %d \n",*pointer1);
    //pointerın tuttuğu değişkenin değeri değiştirilemez

//**************************************************************************************

    const int variable3 = 10;
    int variable4 = 20;

    const int *pointer2 = &variable3;
    printf("pointer2nin tuttugu degiskenin degeri: %d \n",*pointer2);

    pointer2 = &variable4;
    printf("pointer2nin tuttugu degiskenin degeri: %d \n",*pointer2);
    //pointerın tuttuğu değişken değiştirilebilir
    //const int --> int olur

    //*pointer2 = 70;
    //printf("pointer2nin tuttugu degiskenin degeri: %d \n",*pointer2);
    //pointerın tuttuğu değişkenin değeri değiştirilemez

//**************************************************************************************

    int variable5 = 10;
    const int variable6 = 20;

    int *pointer3 = &variable5;
    printf("pointer3un tuttugu degiskenin degeri: %d \n",*pointer3);

    //pointer3 = &variable6;
    //printf("pointer3un tuttugu degiskenin degeri: %d \n",*pointer3);
    //pointerın tuttuğu değişken değiştirilemez
    //int --> const int olamaz

    *pointer3 = 70;
    printf("pointer3un tuttugu degiskenin degeri: %d \n",*pointer3);
    //pointerın tuttuğu değişkenin değeri değiştirilebilir

//**************************************************************************************

    int variable7 = 10;
    int variable8 = 20;

    int *const pointer4 = &variable7;
    printf("pointer4un tuttugu degiskenin degeri: %d \n",*pointer4);

    //pointer4 = &variable8;
    //printf("pointer4un tuttugu degiskenin degeri: %d \n",*pointer4);

    *pointer4 = 70;
    printf("pointer4un tuttugu degiskenin degeri: %d \n",*pointer4);

//**************************************************************************************

    int variable9 = 10;
    int variable10 = 20;

    const int* const pointer5 = &variable9;
    printf("pointer5in tuttugu degiskenin degeri: %d \n",*pointer5);

    //pointer5 = &variable10;
    //printf("pointer5in tuttugu degiskenin degeri: %d \n",*pointer5);

    //*pointer5 = 70;
    //printf("pointer5in tuttugu degiskenin degeri: %d \n",*pointer5);

    return 0;
}