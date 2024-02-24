#include <stdio.h>

int main(){

    int number1 = 43;
    printf("%d \n",number1); //sayiyi yazar
    printf("%p \n",&number1); //referansi yazar

    int number2 = 13;
    int* pointer = &number2;
    printf("%d \n",number2); //sayiyi yazar
    printf("%d \n",*pointer); //sayiyi yazar
    printf("%p \n",pointer); //referansi yazar
    printf("%p \n",&pointer); //referansi yazar

    int* nullPointer = NULL;
    printf("null pointer: %p \n",nullPointer);

    int variable1 = 5;
    int* const constantPointer1 = &variable1;
    printf("constant pointer: %p \n",constantPointer1);
    //degisken constant degil
    //adres constant

    const int variable2 = 7;
    const int* constantPointer2 = &variable2;
    printf("constant pointer: %p \n",constantPointer2);
    //degisken constant
    //adres constant degil

    int* pointer1;
    int *pointer2;
    int * pointer3;
    //pointerin farkli sekillerde tanimlanmasi

    int *pointer4,*pointer5;
    //dogru kullanim

    int *pointer6,pointer7;
    //yanlis kullanim

    int* pointer8;
    float* pointer9;
    //pointerlarin basindaki type tuttugu degiskenin typeidir

    int x = 2;
    int* pointerA = &x; //x in adresini tutar
    int** pointerB = &pointerA; //x in adresini tutan pointerin adresini tutar

    int* intPointer1;
    int* intPointer2 = NULL;
    char* charPointer;
    double* doublePointer;
    float* floatPointer;
    void* voidPointer;

    printf("%lu \n",sizeof(intPointer1));
    printf("%lu \n",sizeof(intPointer2));
    printf("%lu \n",sizeof(charPointer));
    printf("%lu \n",sizeof(doublePointer));
    printf("%lu \n",sizeof(floatPointer));
    printf("%lu \n",sizeof(voidPointer));

    return 0;
}