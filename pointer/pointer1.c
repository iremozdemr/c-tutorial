#include <stdio.h>

int main(){
    char charVariable = 'a';
    //1
    short shortVariable = 1;
    //2
    int intVariable = 1;
    //4
    float floatVariable = 2.14;
    //4
    double doubleVariable = 2.14;
    //8

    char charArray1[] = {'a','b'};
    char charArray2[2][2] = {{'a','b'},{'c','d'}};
    int intArray1[] = {1,2};
    int intArray2[2][2] = {{1,2},{3,4}};

    printf("size of char: %lu \n",sizeof(charVariable));
    printf("size of short: %lu \n",sizeof(shortVariable));
    printf("size of int: %lu \n",sizeof(intVariable));
    printf("size of float: %lu \n",sizeof(floatVariable));
    printf("size of double: %lu \n",sizeof(doubleVariable));

    printf("size of char array1: %lu \n",sizeof(charArray1));
    printf("size of char array2: %lu \n",sizeof(charArray2));
    printf("size of int array1: %lu \n",sizeof(intArray1));
    printf("size of int array2: %lu \n",sizeof(intArray2));

    printf("size of char pointer: %lu \n",sizeof(&charVariable));
    printf("size of short pointer: %lu \n",sizeof(&shortVariable));
    printf("size of int pointer: %lu \n",sizeof(&intVariable));
    printf("size of float pointer: %lu \n",sizeof(&floatVariable));
    printf("size of double pointer: %lu \n",sizeof(&doubleVariable));

    printf("size of char array1 pointer: %lu \n",sizeof(&charArray1));
    printf("size of char array2 pointer: %lu \n",sizeof(&charArray2));
    printf("size of int array1 pointer: %lu \n",sizeof(&intArray1));
    printf("size of int array2 pointer: %lu \n",sizeof(&intArray2));

    return 0;
}

//ters slash kısayolu: option + ?

//değişkenler ram'de tutulur
//pointerlar ram'de tutulur