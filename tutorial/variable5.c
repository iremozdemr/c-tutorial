#include <stdio.h>

int main(){
    short num1 = 2;
    int num2 = 6;
    long num3 = 123456;
    float num4 = 2.3;
    double num5 = 3.77;
    //long float num6 = 1234.567;
    long double num7 = 3.12345;

    short int num8 = -2;
    long int num9 = 256;
    long long int num6 = 12345;

    unsigned short int num10 = 2;
    unsigned int num11 = 6u;
    unsigned long int num12 = 8u;
    unsigned long long int num13 = 17890u;

    printf("num1: %hd\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %ld\n", num3);
    printf("num4: %f\n", num4);
    printf("num5: %lf\n", num5);
    //printf("num6: %Lf\n", num6);
    printf("num7: %Lf\n", num7);
    printf("num8: %hd\n", num8);
    printf("num9: %ld\n", num9);
    printf("num10: %hu\n", num10);
    printf("num11: %u\n", num11);
    printf("num12: %lu\n", num12);
    printf("num13: %llu\n", num13);


    char char1 = 'a';
    signed char2 = 'b';
    unsigned char3 = 'c';

    printf("char1: %c\n", char1);
    printf("char2: %c\n", char2);
    printf("char3: %c\n", char3);

    return 0;
}

//types of modifiers
//short
//long
//signed
//unsigned