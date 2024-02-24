#include <stdio.h>

struct child{
    int i;
    char c;
};

struct parent{
    int j;
    struct child b;
};

int main(){
    struct parent variable1 = {12,45,'a'};

    printf("variable1.j: %i \n",variable1.j);
    printf("variable1.b.i: %i \n",variable1.b.i);
    printf("variable1.b.c: %c \n",variable1.b.c);

    return 0;
}