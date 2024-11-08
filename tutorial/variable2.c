#include <stdio.h>
#include <string.h>

int main(){
    //degisken isimleri rakamla baslayamaz
    //degisken isimleri sadece
    //-rakam
    //-harf
    //-underscore
    //icerebilir

    int x=5, y=6, z=7;
    printf("%d %d %d \n",x,y,z);

    int a,b,c;
    a = b = c = 50;
    printf("%d %d %d \n",a,b,c);

    int number = 5;
    float floatNumber = 2.5;
    double doubleNumber = 2.3;
    char character = 'x';

    char word1[] = "hello";
    char word2[11] = "hello world";
    char word3[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd','\0'};
    char word4[50] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd','\0'};
    //en sona \0 eklenir

    int size1 = strlen(word3);
    printf("%d\n",size1);
    //strlen ile uzunluk bulunurken sondaki \0 dahil edilmez

    int size2 = sizeof(word3);
    printf("%d\n",size2);
    //sizeof ile uzunluk bulunurken sondaki \0 dahil edilir

    int size3 = strlen(word4);
    printf("%d\n",size3);
    //sonuc 11 olur

    int size4 = sizeof(word4);
    printf("%d\n",size4);
    //sonuc 50 olur
    
    char word[] = "hello";
    strcpy(word,"abcde");
    //stringleri degistirmek icin kullanilan method

    char str1[20] = "hello";
    char str2[] = "world";
    strcat(str1,str2);
    //str2 yi str1 e ekler
    //sonuc str1 de depolanir
    //stringleri birlestirmek icin kullanilan method

    char str3[] = "hello";
    char str4[] = "world";
    strcpy(str3,str4);
    //str4 ü str3 e kopyalar
    //str3 degisir
    //stringleri kopyalamak icin kullanilan method

    char str5[] = "hello";
    char str6[] = "hello";
    char str7[] = "hi";
    printf("%d\n", strcmp(str5, str6));
    printf("%d\n", strcmp(str5, str7));
    //stringleri alfabetik olarak karsilastirmak icin kullanilan method

    int sizeOfInt = sizeof(int);
    int sizeOfChar = sizeof(char);
    int sizeOfFloat = sizeof(float);
    int sizeOfDouble = sizeof(double);
    printf("the size of int data type: %d \n",sizeOfInt);
    printf("the size of char data type: %d \n",sizeOfChar);
    printf("the size of float data type: %d \n",sizeOfFloat);
    printf("the size of double data type: %d \n",sizeOfDouble);

    return 0;
}