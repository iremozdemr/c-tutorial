#include <stdio.h>
#include <string.h>

struct structure1{
    int i;
    char c;
    float f;
    char s[30];
};

struct structure2{
    int ii;
    char cc;
    float ff;
    char ss[30];
} variable4,variable5,variable6;

struct{
    int iii;
    char ccc;
    float fff;
    char sss[30];
} structure3;

int main(){
    struct structure1 variable1 = {1,'a',1.11,"hello1"};
    struct structure1 variable2 = {2,'b',1.12,"hello2"};
    struct structure1 variable3 = {.i = 3, .c = 'c', .f = 1.13, .s = "hello3"};

    printf("variable1: %i  %c  %f  %s \n",variable1.i,variable1.c,variable1.f,variable1.s);
    printf("variable2: %i  %c  %f  %s \n",variable2.i,variable2.c,variable2.f,variable2.s);
    printf("variable3: %i  %c  %f  %s \n",variable3.i,variable3.c,variable3.f,variable3.s);

    structure3.iii = 56;
    structure3.ccc = 'q';
    structure3.fff = 2.4;
    strcpy(structure3.sss,"hello");

    printf("structure3: %i  %c  %f  %s \n",structure3.iii,structure3.ccc,structure3.fff,structure3.sss);

    return 0;
}