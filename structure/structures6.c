#include <stdio.h>
#pragma pack(1)

struct structure1{
    char c;
    int i;
};

struct structure2{
    char cc;
    int ii;
}__attribute((packed))__;

int main(){
    printf("size of structure1: ");
    printf("%i \n",sizeof(struct structure1));
    //size of structure1: 5

    printf("size of structure2: ");
    printf("%i \n",sizeof(struct structure2));
    //size of structure2: 5

    return 0;
}