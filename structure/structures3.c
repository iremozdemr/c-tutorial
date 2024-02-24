#include <stdio.h>

struct structure{
    int x;
    int y;
};

int main(){
    struct structure variable = {1,2};
    struct structure* pointer = &variable;

    printf("%d  %d  \n",pointer -> x,pointer -> y);
    printf("%d  %d  \n",(*pointer).x,(*pointer).y);
    printf("%p \n",pointer);
    printf("%p \n",&variable);
    printf("%p \n",&variable.x);
    printf("%p \n",&variable.y);
    return 0;
}