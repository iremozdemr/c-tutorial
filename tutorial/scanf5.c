#include <stdio.h>

int main(){
    //sprintf() kullanımı:

    char string1[100];
    int num = 10;

    sprintf(string1,"the integer is: %d",num);
    printf("%s \n",string1);

    //sscanf() kullanımı:

    char string2[100] = "the integer is: 20";
    int number;

    sscanf(string2,"the integer is: %d",&number);
    printf("%d \n",number);

    return 0;
}