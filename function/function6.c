#include <stdio.h>

void function1(){
    printf("function name: %s \n", __func__);
}

void function2(){
    printf("function name: %s \n", __func__);
}

int main(){
    printf("function name: %s \n", __func__);
    printf("file name: %s \n",__FILE__);
    printf("line: %i \n",__LINE__);
    function1();
    function2();
    return 0;
}