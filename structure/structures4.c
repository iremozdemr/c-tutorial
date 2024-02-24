#include <stdio.h>

struct structure{
    int x;
    int y;
    struct structure* next;
};

int main(){
    struct structure var1 = {12,57,NULL};
    struct structure var2 = {78,56,NULL};

    var1.next = &var2;

    printf("var1: %i  %i  %p  \n",var1.x,var1.y,var1.next);
    printf("var2: %i  %i  %p  \n",var2.x,var2.y,var2.next);

    return 0;
}