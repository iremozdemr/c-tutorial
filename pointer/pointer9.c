#include <stdio.h>

void print(void *data,char dataType){
    if(dataType == 'i'){
        int *newPointer = (int*) data;
        printf("integer: %d \n",*newPointer);
    }
    else if(dataType == 'f'){
        float *newPointer = (float*) data;
        printf("float: %f \n",*newPointer);
    }
    else if(dataType == 'c'){
        char *newPointer = (char*) data;
        printf("char: %c \n",*newPointer);
    }
}

int main(){
    int intValue = 1;
    float floatValue = 2.14;
    char charValue = 'a';

    print(&intValue,'i');
    print(&floatValue,'f');
    print(&charValue,'c');

    return 0;
}